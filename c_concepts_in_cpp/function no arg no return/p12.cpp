#include<iostream>
using namespace std;
int add()
{
	int i=1,j,sp=10,n=5;
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
			if(i==1||i==n||j==1||j==i)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
			j++;
		}while(j<=i);		
		cout<<"\n";
		sp--;
		i++;
	}while(i<=n);
}
int main()
{
	add();
}