#include<iostream>
using namespace std;
class area{
	public:
	int over(int a,int b)
	{
		cout<<"area of square:"<<a*b<<endl;
	}
	int over(double a,double b)
	{
		cout<<"area of triangle:"<<a*b/2<<endl;
	}
	int over(int a,int b,int c)
	{
		cout<<"area of trapezium:"<<(a+b)*c/2<<endl;	
	}		
};
int main()
{
	area a;
	a.over(5,4);
	a.over(4,5,6);
}