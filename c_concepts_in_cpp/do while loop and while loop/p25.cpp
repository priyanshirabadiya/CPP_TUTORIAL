#include<iostream>
using namespace std;
int main()
{
	int i=5,j;
	while(i>=1)
	{
		j=5;
		while(j>=1)
		{
			cout<<"  "<<i;
			j--;
		}
		cout<<"\n";
		i--;
	}
	return 0;
}