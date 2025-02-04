#include<iostream>
using namespace std;
class volume{
    public:
    volume(int a)
    {
        cout<<"volume of cube is:"<<a*a*a<<endl;
    }
    volume(int l,int b,int h)
    {
         cout<<"volume of cuboid is:"<<l*b*h<<endl;
    }
    volume(int r,int h)
    {
        cout<<"volume of cone is :"<<0.3*3.14*r*r*h;
    }

};
int main()
{
    volume a(7),b(6,5,9),c(7,8);
}