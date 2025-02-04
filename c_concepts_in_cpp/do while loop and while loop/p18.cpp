#include<iostream>
using namespace std;
int main()
{
	int i=1,n,a=1;
	cout<<"enter n:";
	cin>>n;
	do
	{
		cout<<"  \n "<<a*i;
		a++;
		i=i*2;
	}while(i<=n);
	return 0;
}