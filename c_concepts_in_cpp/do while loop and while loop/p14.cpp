#include<iostream>
using namespace std;
int main()
{
	int i=2,total=0;
	do
	{
		cout<<"\n "<<  i;
		total+=i;
		i+=2;
	}while(i<=6);
	cout<<" total is even:"<<total;
	return 0;
}