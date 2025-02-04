#include<iostream>
using namespace std;
class volum{
	public:
	int work(int a)
	{
		cout<<"volum of cube:"<<a*a*a<<endl;
	}
	int work(int l,int b,int h)
	{
		cout<<"volum of cubiod:"<<l*b*h<<endl;
	}
	double work(double r,double h)
	{
		cout<<"volum of cone :"<<3.14*r*r*h/3<<endl;
	}
	int work(int r,int h)
	{
		cout<<"volum of cylinder:"<<3.14*r*r*h<<endl;
	}	
};
int main()
{
	volum t;
	t.work(5);
	t.work(4,5,6);
	t.work(4.5,8.5);
}
