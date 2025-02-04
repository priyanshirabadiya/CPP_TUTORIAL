#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<" enter x:";
	cin>>x;
	cout<<"enter y:";
	cin>>y;
	if(x<2000||x>3000)
	{
		cout<<" \n"<<x;
	}
	if(y>100&&y<500)
	{
		cout<<" \n"<<y;
	}
	return 0;
}