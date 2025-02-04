#include<iostream>
using namespace std;
int main()
{
	int i=1,j,a=65;
	do
	{
		j=1;
		do
		{
			if(i%2!=0)
			{
				cout<<"  "<<char(a);
			}
			else
			{
				cout<<" "<<char(a+32);
			}
			a++;
			j++;
		}while(j<=i);
		cout<<"\n";
		i++;
	}while(i<=5);
	return 0;
}