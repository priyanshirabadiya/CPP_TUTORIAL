#include<iostream>
using namespace std;
class test{
	public:
	test()
	{
	       cout<<"defult constructor is called..."<<endl;
	}
	test(int a)
	{
	    cout<<"parameterized constructor is called...a:"<<a<<endl;
	}
	test(char a)
	{
	    cout<<"parameterized constructor is called...a:"<<a<<endl;
	}
};
	int main()
	{
	    test t,b(20),c('A');
	}



