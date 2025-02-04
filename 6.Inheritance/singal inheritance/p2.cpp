#include<iostream>
using namespace std;
class base{
    protected:
    int n,i,j=1;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class derived :public base
{
    public:
    void getN()
    {
        for(i=1;i<=n;i++)
        {
            j=i*i;
            cout<<"\nserires is :"<<j;
        }
    }
    
};
int main()
{
    derived d;
    d.setN();
    d.getN();
}
