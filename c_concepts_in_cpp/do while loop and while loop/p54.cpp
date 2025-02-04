#include<iostream>
using namespace std;
int main()
{
	int i=1,j,sp=10,n;
	cout<<"enter n:";
	cin>>n;
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
	return 0;
}