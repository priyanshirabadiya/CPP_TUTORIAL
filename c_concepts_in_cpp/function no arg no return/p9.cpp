#include<iostream>
using namespace std;
int add()
{
	int i,n,j;
	cout<<"enter n :";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
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
