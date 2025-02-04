#include<iostream>
using namespace std;
class test{
    int eng,maths,sci,total,per;
    public:
    void setn();
    void getn()
    {
        total=eng+maths+sci;
        per =total/3;
    }
    void met()
    {
        cout<<"eng\tmaths\tsci\ttotal\tper";
        cout<<"\n"<<eng<<"\t"<<maths<<"\t"<<sci<<"\t"<<total<<"\t"<<per;
        
    }
};
void test::setn()
{
    cout<<"\nenter eng :"<<endl;
    cin>>eng;
    cout<<"enter maths :"<<endl;
    cin>>maths;
    cout<<"enter sci :"<<endl;
    cin>>sci;
    getn();
    met();
}
int main()
{
    test a[2];
    int i;
    for(i=0;i<2;i++)
    {
        a[i].setn();
    }
    
}
    
    
    
    
    
    
    
    
    
    
    
