#include<iostream>
using namespace std;
int add()
{
	int i,n=5,j,l=65;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			cout<<""<<char(l);
			else
			cout<<""<<char(l+32);
			l++;
		}
		cout<<"\n";
	}
}
int main()
{
	add();
}
