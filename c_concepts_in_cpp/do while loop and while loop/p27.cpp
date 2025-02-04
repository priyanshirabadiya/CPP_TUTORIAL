#include<iostream>
using namespace std;
int main()
{
	int i=65,j;
	while(i<=69)
	{
		j=65;
		while(j<=69)
		{
			cout<<"  "<<char(i);
			j++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}