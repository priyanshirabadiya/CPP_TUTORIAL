#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=sp;j--)
			cout<<"  ";
		for(j=5;j>=i;j--)
		{
			cout<<" * ";
		}
		sp++;
		cout<<" \n";
	}
	return 0;
}