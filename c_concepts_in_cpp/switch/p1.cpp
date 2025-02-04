#include<iostream>
using namespace std;
int main()
{
	int a,b,ch;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	cout<<"1.addition";
	cout<<"\n2.substraction";
	cout<<"\n3.multiplication";
	cout<<"\n4.division";
	cout<<"\n\n enter your choice:";
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<"Addition of a and b is :"<<a+b;
		break;
	case 2:
		cout<<"substraction of a and b is :"<<a-b;
		break;
	case 3:
		cout<<"multiplication of a and b is :"<<a*b;
		break;
	case 4:
		cout<<"division of a and b is :"<<a/b;
		break;
	default:
		cout<<"\n wrong input....";
		break;
	}
}
	