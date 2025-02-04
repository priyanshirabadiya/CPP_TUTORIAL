#include<iostream>
using namespace std;
int main()
{
	int i=2,j;
	do
	{
		j=2;
		do
		{
			cout<<" "<<i;
			j=j+2;
		}while(j<=10);
		cout<<"\n";
		i=i+2;
	}while(i<=10);
	return 0;
}