#include<iostream>
using namespace std;
class base{
    public:
    virtual void dis()
    {
        cout<<"base class called..."<<endl;
    }
};
class derived : public base
{
    public:
    void dis()
    {
        cout<<"derived class is called..."<<endl;
    }

};
int main()
{
    base *p,b;
    derived d;
    p=&b;
    p->dis();
    p=&d;
    p->dis();
}