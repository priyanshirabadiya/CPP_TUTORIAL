#include<iostream>
using namespace std;
int main()
{
	int i=5,j,sp=10;
	while(i>=1)
	{
		j=1;
		while(j<=sp)
		{
			cout<<"   ";
			j++;
		}		
		j=1;
		while(j<=i)
		{
			cout<<" * ";
			j++;
		}
		cout<<"\n";
		sp++;
		i--;
	}
	return 0;
}