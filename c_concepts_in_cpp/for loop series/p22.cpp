#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;i<=24;i=i+2)
	{
		if(i%4==0)
		{
			cout<<" "<<char(i+65);
		}
		else
		{
			cout<<" "<<char(i+97);
		}
		
	}
	return 0;
}
		