#include<iostream>
using namespace std;
int main()
{
	int i=1,j,sp=10,n;
	cout<<"enter n:";
	cin>>n;
	do
	{
		j=n;
		do
		{
			if(i>=j)
			{
				cout<<"* ";
			}
			else
			{
				cout<<" ";
			}
			j--;
		}while(j>=1);		
		cout<<"\n";
		sp--;
		i++;
	}while(i<=n);
	i=n-1;
	do
	{
		j=n;
		do
		{
			if(i>=j)
			{
				cout<<"* ";
			}
			else
			{
				cout<<" ";
			}
			j--;
		}while(j>=1);		
		cout<<"\n";
		sp--;
		i--;
	}while(i>=1);
	return 0;
}