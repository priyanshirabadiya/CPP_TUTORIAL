#include<iostream>
using namespace std;
int main()
{
	int i=1,j,a=65;
	do
	{
		j=1;
		do
		{
			cout<<"   "<<char(a);
			a++;
			j++;
		}while(j<=i);
		i++;
	}while(i<=5);
	cout<<"\n";
	return 0;
}