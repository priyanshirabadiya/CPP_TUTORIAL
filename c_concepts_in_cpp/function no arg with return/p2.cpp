#include<iostream>
using namespace std;
int add()
{
	int m,n;
	cout<<"enter n:";
	cin>>n;
	cout<<"enter m:";
	cin>>m;
	if(n<m)
	{
		//printf("%d small number",n);
		return n;
	}
	else
	{
		//printf("%d small number",m);
		return m;
	}
}
int main()
{
	printf("%d",add());
}