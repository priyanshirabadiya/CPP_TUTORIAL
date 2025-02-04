#include<iostream>
using namespace std;
int main()
{
	int i=1,j,sp;
	while(i<=5)
	{
		sp=10;
		while(j>=sp)
		{
			cout<<"";
			j--;
		}		
		j=5;
		while(j>=i)
		{
			cout<<" * ";
			j--;
		}
		sp++;
		cout<<"\n";
		i++;
	}
	return 0;
}