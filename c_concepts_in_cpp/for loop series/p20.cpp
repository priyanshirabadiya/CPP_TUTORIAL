#include<iostream>
using namespace std;
int main()
{
	int i,n,a=0,b=1,c;
	cout<<"enter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<"  "<<c;
		a=b;
		b=c;
	}
	return 0;
}
		