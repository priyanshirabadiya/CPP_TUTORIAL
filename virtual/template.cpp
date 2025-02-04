#include<iostream>
using namespace std;
template <class t>
void display(t t1)
{
    cout<<"display templete:"<<t1<<endl;
}
template<<class x,class y>
void add(x a,y b)
{
    cout<<"addition templete :"<<a+b<<endl;
}
void display(x a,y b)
{
    cout<<"displaying templete:"<<a<<"\t"<<b<<endl;
}
int main()
{
    display(200);
    display(12.56);
    display('g',1.25);
    display('x',25);
    display(25,125);
    add(2,5.7);
    add(4,5.7);
}