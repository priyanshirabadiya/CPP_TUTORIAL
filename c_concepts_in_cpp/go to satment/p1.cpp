#include<iostream>
using namespace std;
int main()
{
	int i=1;
	test:
		if(i<=5)
		{
			cout<<""<<i++;
			goto test;
		}
}