#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		{
			cout<<" "<<char(j+64);
		}
		cout<<"\n";
		sp-=2;
	}
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		{
			cout<<" "<<char(j+64);
		}
		cout<<"\n";
		sp+=2;
	}	
	return 0;
}