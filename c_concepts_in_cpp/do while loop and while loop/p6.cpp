#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"enter n:";
	cin>>n;
	do
	{
		cout<<"\n"<<i;
		i=i+2;
	}while(i<=n);
	return 0;
}