#include<iostream>
using namespace std;
class box{
    public:
    int l,w,h;
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
    box operator*(box &n){
    box t;
    t.l=l*n.w;
    t.w=w*n.l;
    t.h=h*n.w;
    return t;
    }

};
int main()
{
    box a,b,c;
    a.setdata(2,2,2);
    cout<<"box avolume is:"<<a.getdata()<<endl;
    b.setdata(3,3,3);
    cout<<"box b volume is:"<<b.getdata()<<endl;
    c=a*b;
    cout<<"box  c volume is:"<<c.getdata()<<endl;
}
    
    