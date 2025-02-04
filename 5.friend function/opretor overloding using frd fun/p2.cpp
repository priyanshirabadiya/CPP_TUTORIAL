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
   friend add operator+(add m,add n)
   {
       add t;
       t.l=m.l+n.l;
       t.w=m.w+n.w;
       t.h=m.h+n.h;
       return t;
   }

};
int main()
{
    add a,b,c;
    a.setdata(3,4,2);
    cout<<"a volume is :"<<a.getdata()<<endl;
    b.setdata(3,8,2);
    cout<<"b volume is :"<<b.getdata()<<endl;
    c=a+b;
    cout<<"c volume is :"<<c.getdata()<<endl;
    
}
