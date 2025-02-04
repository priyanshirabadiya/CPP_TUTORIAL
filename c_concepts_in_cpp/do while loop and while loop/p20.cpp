#include<iostream>
using namespace std;
int main()
{
	int i=1,a=0,b=1,c,n;
	cout<<" enter n:";
	cin>>n;
	do
	{
		c=a+b;
		a=b;
		b=c;
		i++;
		cout<<"  "<<a;
	}while(i<=n);
	return 0;
}
	
	