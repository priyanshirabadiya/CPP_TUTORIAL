#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	do
	{
		j=1;
		do
		{
			cout<<"  "<<i;
			j++;
		}while(j<=5);
		cout<<"\n";
		i++;
	}while(i<=5);
	return 0;
}