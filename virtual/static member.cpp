#include<iostream>
using namespace std;
class test{
    public:
    static int a;
    test()
    {
        cout<<"test calling..."<<endl;
        ++a;
    }
    static int member()
    {
        return 0;
    }
};
int test :: a=50;
int main()
{
    cout<<"starting point:"<<test::member()<<endl;
    test t1,t2;
    cout<<"ending point :"<<test::member()<<endl;
}