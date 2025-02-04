#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	while(i<=9)
	{
		j=1;
		while(j<=9)
		{
			cout<<"  "<<i;
			j=j+2;
		}
		cout<<"\n";
		i=i+2;
	}
	return 0;
}