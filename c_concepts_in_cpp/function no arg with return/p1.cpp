#include<iostream>
using namespace std;
int add()
{
	int a,b;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	return a+b;
}
int main()
{
	int x;
	x=add();
	//printf("add:%d",add());
	cout<<"add:"<<x;
}