#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"enter c:";
	cin>>c;
	d=(a>b&&a>c)?a:(b>c)?b:c;
	cout<<"largest number is:"<<d;
	return 0;
}