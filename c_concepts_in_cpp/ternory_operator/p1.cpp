#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	c=a<b?a:b;
	cout<<"smallest number is:"<<c;
	return 0;
}