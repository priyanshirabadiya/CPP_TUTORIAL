#include<iostream>
using namespace std;
int add(int n)
{
	int i,rev=0,a;
	while(n!=0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
	}
	cout<<rev;
}
int main()
{
	int n=456;
	add(n);
}