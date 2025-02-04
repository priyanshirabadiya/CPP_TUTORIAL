#include<iostream>
using namespace std;
int main()
{
	int i=0;
	do
	{
		if(i%4==0)
		{
			cout<<" "<<char(i+65);
		}
		else
		{
			cout<<" "<<char(i+97);
		}
		i=i+2;
	}while(i<=24);
	return 0;
}
