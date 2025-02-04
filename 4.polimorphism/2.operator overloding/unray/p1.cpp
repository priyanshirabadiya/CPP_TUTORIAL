#include<iostream>
using namespace std;
class box{
	int l,w,h;
	public:
	void setdata(int a,int b,int c)
	{
		l=a;
		w=b;
		h=c;
	}
	int getdata()
	{
		return l*w*h;
	}
	box operator++(int)
	{
		box t;
		t.l=l++;
		t.w=w++;
		t.h=h++;
		return t;
	}
};
int main()
{
	box b,a;
	a.setdata(2,6,2);
	cout<<"Box A volum is:"<<a.getdata()<<endl;
        a++;
	b=a;
	cout<<"Box c volum is:"<<b.getdata()<<endl;
}