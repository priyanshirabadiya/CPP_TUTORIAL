#include<iostream>
using namespace std;
int add()
{
	int i,n,j;
	cout<<"enter n :";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			cout<<""<<i;
		}
		cout<<"\n";
	}
}
int main()
{
	add();
}
