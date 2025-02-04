#include<iostream>
using namespace std;
class base 
{
    protected:
    int m;
    public:
    void setM(){
        cout<<"enter m:";
        cin>>m;
    }
};
class derived1: public base
{
    
    public:
    void addition()
    {
        cout<<"squre of n and m is:"<<m*m<<endl;
    }
    
};
class derived2: public base 
{
    public:
    void product()
    {
        cout<<"product of m and n:"<<m*m*m<<endl;
    }
};
int main()
{
    derived1 t;
    t.setM();
    // t.setN();
    t.addition();
    
    derived2 d;
    d.setM();
    // d.setN();
    d.product();
    
}




