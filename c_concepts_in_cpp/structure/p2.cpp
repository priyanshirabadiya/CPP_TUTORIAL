#include<iostream>
using namespace std;
struct student{
	int rollno;
	char name[20];
	int m,s,e,t;
	float per;
};
int main()
{
	struct student a[5];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"enter roll no:";
		cin>>a[i].rollno;
		cout<<"enter name:";
		cin>>a[i].name;
		cout<<"enter maths marks:";
		cin>>a[i].m;
		cout<<"enter english marks:";
		cin>>a[i].e;
		cout<<"enter science marks:";
		cin>>a[i].s;
	}
	cout<<"\n\nrollno\tname\tmaths\tsci\teng\ttotal\tper";
	for(i=0;i<2;i++)
	{
		a[i].t=a[i].m+a[i].e+a[i].s;
		a[i].per=(float)a[i].t/3;
		cout<<"\n"<<a[i].rollno<<"\t"<<a[i].name<<"\t"<<a[i].m<<"\t"<<a[i].e<<"\t"<<a[i].s<<"\t"<<a[i].t<<"\t"<<float(a[i].per);
	}
}