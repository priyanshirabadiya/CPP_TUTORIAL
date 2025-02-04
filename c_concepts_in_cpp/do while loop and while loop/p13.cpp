#include<iostream>
using namespace std;
int main()
{
	int i=1,total=0;
	while(i<=5)
	{
		cout<<"\n "<<  i;
		total+=i;
		i+=2;
	}
	cout<<" total is odd:"<<total;
	return 0;
}