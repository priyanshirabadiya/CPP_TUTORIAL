#include<iostream>
using namespace std;
int main()
{
	int i,j,n,sp=10;
	cout<<" enter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
		{
			if(i==1||i==n||j==1||j==i)
				cout<<"* ";
			else
				cout<<"  ";
		}
		sp--;
		cout<<"\n";
	}
	return 0;
}