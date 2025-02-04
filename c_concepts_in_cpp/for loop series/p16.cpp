#include<iostream>
using namespace std;
int main()
{
	int i,n,j=1;
	cout<<"enter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			j=i*i;
			cout<<"  "<<j;
		}
		else
		{
			cout<<"  "<<i;
		}
	}
	return 0;
}