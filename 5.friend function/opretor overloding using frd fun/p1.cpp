#include<iostream>
using namespace std;
class add
{
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
    friend add operator+(add x)
    {
        add t;
        t.l=++x.l;
        t.w=++x.w;
        t.h=++x.h;
        return t;
    }
};
int main()
{
    add a,b;
    a.setdata(5,6,7);
    cout<<"volume a is:"<<a.getdata()<<endl;
    ++a;
    b=a;
    cout<<"volume b is:"<<b.getdata()<<endl;
}