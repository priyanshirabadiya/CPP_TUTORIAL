#include<iostream>
using namespace std;
class test{
	int admno;
	char name[20];
	float eng,maths,sci,total;
	float ctotal(){
		return eng+maths+sci;
}
public:
void takedata(){
	cout<<"enter value of admno :"<<endl;
	cin>>admno; 
	cout<<"enter value of name :"<<endl;
	cin>>name; 
	cout<<"enter value of eng :"<<endl;
	cin>>eng; 	
	cout<<"enter value of maths :"<<endl;
	cin>>maths; 	
	cout<<"enter value of sci:"<<endl;
	cin>>sci;
	total=ctotal();
}
void showdata(){
	cout<<"\nadmno\tname\teng\tmaths\tsci\ttotal";
	cout<<"\n"<<admno<<"\t"<<name<<"\t"<<eng<<"\t"<<maths<<"\t"<<sci<<"\t"<<total;
} 	
};
int main(){

	test t;
	t.takedata();
	t.showdata();
}