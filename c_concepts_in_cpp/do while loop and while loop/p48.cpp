#include<iostream>
using namespace std;
int main()
{
	int i=1,j,sp;
	j=1;
	do
	{
		sp=10;
		do
		{
			cout<<"  ";
			j++;
		}while(j<=sp);		
		j=1;
		do
		{
			cout<<"* ";
			j++;
		}while(j<=i);
		sp--;
		cout<<"\n";
		i++;
	}while(i<=5);
	return 0;
}