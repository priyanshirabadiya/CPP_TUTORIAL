#include<iostream>
using namespace std;
int main()
{
	int i=1,n,j=1;
	cout<<"enter n:";
	cin>>n;
	while(i<=n)
	{
		j=i*i;
		cout<<"  "<<j;
		i++;
	}
	return 0;
}
