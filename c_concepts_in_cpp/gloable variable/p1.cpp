#include<iostream>
using namespace std;
int maths,sci,eng,total;
float per;
void dis()
{
	cout<<"maths\tenglish\tsci\ttotal\tper\n";
	cout<<maths<<"\t"<<eng<<"\t"<<sci<<"\t"<<total<<"\t"<<per;

}
void clac()
{
	total=maths+eng+sci;
	per=(float)total/3;
	dis();
}
void setdata()
{
	cout<<"\nenter maths marks:";
	cin>>maths;
	cout<<"\nenter english marks:";
	cin>>eng;
	cout<<"\nenter sci marks:";
	cin>>sci;
	clac();
}
int main()
{
	setdata();
}
	
	