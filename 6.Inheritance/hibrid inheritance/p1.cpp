#include<iostream>
using namespace std;
class base{
    public:
    base()
    {
        cout<<"base called..."<<endl;
    }
};
class abc: public base{
    public:
    abc()
    {
        cout<<"abc is called.."<<endl;
    }
};
class xyz : public base{
    public:
    xyz()
    {
        cout<<"xyz is called.."<<endl;
    }
};
class pqr: public xyz,public abc{
    public:
    pqr()
    {
        cout<<"pqr is called.."<<endl;
    }
    
};
int main()
{
    pqr p;
}




