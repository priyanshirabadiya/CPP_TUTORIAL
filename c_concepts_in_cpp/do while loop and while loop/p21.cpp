#include<iostream>
using namespace std;
int main()
{
	float i=0.5,n,j=0.5;
	cout<<"enter n:";
	cin>>n;
	cout<<j;
	while(i<=n)
	{
		j+=i*1;
		cout<<"  "<<j;
		i++;
	}
	return 0;
}
