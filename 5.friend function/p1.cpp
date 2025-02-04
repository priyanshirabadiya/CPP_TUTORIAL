#include<iostream>
using namespace std;
class box{
	int l,w,h;
	friend box add(box,box);
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
};
	box add(box x,box y)
	{
		box t;
	    t.l=x.l+y.l;
	    t.w=x.w+y.w;
	    t.h=x.h+y.h;
		return t;
	}
int main()
{
	box b,a,c;
	b.setdata(2,6,2);
	cout<<"Box A volum is:"<<b.getdata()<<endl;
	a.setdata(2,6,9);
	cout<<"Box A volum is:"<<a.getdata()<<endl;
	c=add(a,b);
	cout<<"Box A volum is:"<<c.getdata()<<endl;
   
}