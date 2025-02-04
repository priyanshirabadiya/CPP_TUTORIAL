#include<iostream>
using namespace std;
int main()
{
	int i=5,j;
	do
	{
		j=5;
		do
		{
			cout<<"  "<<j;
			j--;
		}while(j>=i);
		cout<<"\n";
		i--;
	}while(i>=1);
	return 0;
}