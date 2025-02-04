#include<iostream>
using namespace std;
int main()
{
	int i=1,a,j,sp=10;
	do
	{
		j=1;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			cout<<" "<<char(j+64);
			j++;
		}while(j<=i);		
		cout<<"\n";
		sp-=2;
		i++;
	}while(i<=5);
	i=6;
	do
	{
		j=1;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			cout<<" "<<char(j+64);
			j++;
		}while(j<=i);		
		cout<<"\n";
		sp+=2;
		i--;
	}while(i>=1);
	return 0;
} 