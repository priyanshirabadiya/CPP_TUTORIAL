#include<iostream>
using namespace std;
int main()
{
	int i,n,j=1;
	cout<<"enter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<" "<<j;
		j*=2;
	}
	return 0;
}
