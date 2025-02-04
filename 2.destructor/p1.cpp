#include<iostream>
using namespace std;
class test{
    int m;
    public:
    test()
    {
        cout<<"default constructor is called..."<<endl;
        cout<<"enter m:";
        cin>>m;
        
    }
    ~test()
    {
        cout<<"destructor is called.."<<endl;
    }
    test(int a)
    {
        cout<<"parameterizes constructora:"<<a<<endl;
    }
    test(char a)
    {
        cout<<"parameterized constructoris called....char a is:"<<a<<endl;
    }
    void getdata(){
        cout<<"value of m:"<<m<<endl;
        
    }
};
int main()
{
    test t,a(10),b('y');
    t.getdata();
}





