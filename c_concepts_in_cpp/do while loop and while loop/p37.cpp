#include<iostream>
using namespace std;
int main()
{
	int i=5,j;
	while(i>=1)
	{
		j=5;
		while(j>=i)
		{
			cout<<"  "<<i;
			j--;
		}
		cout<<"\n";
		i--;
	}
	return 0;
}