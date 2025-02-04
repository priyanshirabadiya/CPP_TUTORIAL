#include<iostream>
using namespace std;
int main()
{
	int i=1,j,sp=10;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			cout<<" ";
			j++;
		}		
		j=5;
		while(j>=i)
		{
			cout<<"* ";
			j--;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}