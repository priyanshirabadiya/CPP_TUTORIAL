#include<iostream>
using namespace std;
class base1{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter n:";
        cin>>n;
    }
};
class base2{
    protected:
    int i,j=1;
};
class derived:public base1,public base2
{
    public:
    void getN(){
        for(i=1;i<=10;i++)
 
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
        
    }
    
};
int main()
{
    derived t;
    t.setN();
    t.getN();
}