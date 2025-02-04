#include<iostream>
using namespace std;
int main()
{
	int i=1,j,n=5;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			if(i==1||i==n||j==1||j==n)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
			j++;
		}		
		cout<<"\n";
		i++;
	}
	return 0;
}