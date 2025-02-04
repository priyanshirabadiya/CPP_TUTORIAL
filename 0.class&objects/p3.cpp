#include<iostream>
using namespace std;
class members{
    int bcode;
    char name[20];
    int innings;
    int notout;
    int runs;
    int batavg;
    int calcavg(){
        return runs/(innings-notout);
    }

public:
void reddata()
{
    cout<<"enter bcode is:";
    cin>>bcode;
    cout<<"enter name is:";
    cin>>name;
    cout<<"enter innings is:";
    cin>>innings;
    cout<<"enter notout is:";
    cin>>notout;
    cout<<"enter runs is:";
    cin>>runs;
    batavg=calcavg();
    
}
void displaydata(){
    
    
    cout<<"\n\bcode\tname\tinnings\tnotout\truns\tbatavg";
    cout<<"\n"<<bcode<<"\t"<<name<<"\t"<<innings<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg;
    
    
}
};
int main()
{
    members t;
    t.reddata();
    t.displaydata();  
}
