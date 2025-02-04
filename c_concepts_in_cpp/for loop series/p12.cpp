#include<iostream>
using namespace std;
int main()
{
	int i,total=0;
	for(i=1;i<=10;i++)
	{
		cout<<" "<<i;
		total+=i;
	}
	cout<<"\n total is:"<<total;
	return 0;
}