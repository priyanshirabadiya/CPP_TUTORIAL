#include<iostream>
using namespace std;
int main()
{
	int i=1,total=0;
	while(i<=5)
	{
		cout<<"\n "<< i<<endl;
		total+=i;
		i++;
	}
	cout<<" total is:"<<total;
	return 0;
}