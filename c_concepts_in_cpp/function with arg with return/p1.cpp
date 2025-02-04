#include<iostream>
using namespace std;
float add(int a,float b)
{
	return a*b;
}
int main()
{
	int a;
	float b;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	float x=add(a,b);
	cout<<"mul:"<<x;
}