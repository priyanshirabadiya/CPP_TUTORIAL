#include<iostream>
using namespace std;
int main()
{
	int i=1,total=0;
	do
	{
		cout<<"\n"<<  i;
		total+=i;
		i++;
	}while(i<=10);
	cout<<"total is:"<<total;
	return 0;
}