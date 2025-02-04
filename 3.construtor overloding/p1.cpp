#include<iostream>
using namespace std;
class test{
    public:
    test()
    {
        cout<<"default constructor is called..."<<endl;
    }
    test(int a)
    {
        cout<<"value of a is :"<<a<<endl;
    }
    test(int a,int b)
    {
        cout<<"Addition of a and b is :"<<a+b<<endl;
    }
    test(double a,double b)
    {
        cout<<"product of a and b is :"<<a*b<<endl;
    }
};
int main()
{
    test a(10),c(10,20),b(5.5,2.3);
}