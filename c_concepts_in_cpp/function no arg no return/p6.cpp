#include<iostream>
using namespace std;
int add()
{
	int n;
	cout<<"enter n :";
	cin>>n;
	if(n>18)
		cout<<"eligible for voteing";
	else
		cout<<"eligible for not voting";
}
int main()
{
	add();
}
