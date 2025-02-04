#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter n:";
	cin>>n;
	cout<<"enter m:";
	cin>>m;
	if(n*m%n+m==0)
	{
		cout<<"dision by 3 or 7";
	}
	else
	{
		cout<<"not divison by 3 or 7";
	}
	return 0;
}
