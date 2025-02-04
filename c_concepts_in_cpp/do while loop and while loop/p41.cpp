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
			if(j%2==0)
			{
				cout<<"  "<<char(a);
			}
			else
			{
				cout<<" "<<char(a+32);
			}
			a++;
			j++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}