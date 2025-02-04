#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	test:
		if(i<=5)
		{
		j=1;
		hello:
		if(j<=i)
		{
			cout<<"*";
			j++;
			goto hello;
		}
			cout<<"\n";
			i++;
			goto test;
		}
}