#include<iostream>
using namespace std;
int main()
{
	int i=1,n,j=1;
	cout<<"enter n:";
	cin>>n;
	do
	{
	if(i%2==0)
		{
			j=i*i;
			cout<<"\n"<<j;
		}
		else
		{
			cout<<"\n "<<i;	
		}
		i++;
	}while(i<=n);
}
