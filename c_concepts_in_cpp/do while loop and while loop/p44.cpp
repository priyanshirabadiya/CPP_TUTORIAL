#include<iostream>
using namespace std;
int main()
{
	int i=1,j,a=1;
	do
	{
		j=1;
		do
		{
			cout<<" "<<a%2;
			a++;
			j++;
		}while(j<=i);
		cout<<"\n";
		i++;
	}while(i<=5);
	return 0;
}