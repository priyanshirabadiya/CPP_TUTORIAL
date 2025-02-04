#include<iostream>
using namespace std;
int add()
{
	int a,b,c;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	a=b*a;
	b=a/b;
	a=a/b;
	cout<<"a="<<a;
	cout<<"b="<<b;
}
int main()
{
	add();
}
