#include<iostream>
using namespace std;
class ABC{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter n:";
        cin>>n;
    }
};
class PQR:public ABC{
    protected:
    int i,j=1;
};
class XYZ:public PQR
{
    public:
    void getN(){
        for(i=1;i<=10;i++)
        // j=n*i;
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
        
    }
    
};
int main()
{
    XYZ t;
    t.setN();
    t.getN();
}