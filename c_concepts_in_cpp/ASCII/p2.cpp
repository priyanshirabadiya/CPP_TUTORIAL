#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter ch:";
	cin>>ch;
	if(65<=ch&&ch<=90)
	{
		cout<<" "<<ch+32;
	}
	else
	{
		cout<<" "<<ch-32;
	}
	return 0;
}