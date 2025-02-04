#include<iostream>
using namespace std;
int main()
{
	int i=1,j,a=65;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			cout<<" "<<char(a-j+1);
			j++;
		}
		a++;
		cout<<"\n";
		i++;
	}
	return 0;
}