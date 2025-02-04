#include<iostream>
using namespace std;
class case{
    protected:
    public:
    int n;
    void setN(){
        cout<<"enter n:";
        cin>>n;
    }
};
class derived:public case
    {
    
    public:
    int i=1,j=1;
    void getN()
    {   
       
        for(i=1;i<=10;i++)
        
        cout<<n<<"*"<<i<<"="<<i*n<<"\n";
    }
};

int main()
{
    case t;
    t.setN();
    t.getN();
}