#include<iostream>
using namespace std;
int main()
{
	int i=1,j,sp=10;
	do
	{
		j=1;
		do
		{
			cout<<" ";
			j++;
		}while(j<=sp);		
		j=1;
		do
		{
			cout<<"* ";
			j++;
		}while(j<=i);
		cout<<"\n";
		sp--;
		i++;
	}while(i<=5);
	return 0;
}