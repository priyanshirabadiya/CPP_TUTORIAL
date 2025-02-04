#include<iostream>
using namespace std;
class test{
    int testcode;
    char description[20];
    int noncandidate;
    int calcntr;
    float CALCNTR(){
        return noncandidate/100+1;
    }
    public:
    void SCHEDULE()
    {
            cout<<"enter teatcode:";
            cin>>testcode;
            cout<<"enter description:"<<endl;
            cin>>description;
            cout<<"enter noncandidate:"<<endl;
            cin>>noncandidate;
            calcntr=CALCNTR();
    }
    void DISPTEST(){
        cout<<"\ntestcode\tdescription\tnoncandidate\tcalcntr";
        cout<<"\n"<<testcode<<"\t\t"<<description<<"\t\t"<<noncandidate<<"\t\t"<<calcntr;
    }
};
int main()
{
    test t;
    t.SCHEDULE();
    t.DISPTEST();
    
}