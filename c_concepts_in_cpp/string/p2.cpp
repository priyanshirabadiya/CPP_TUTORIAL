#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
	cout<<"Enter string:";
	cin>>str;
	int k=strlen(str);
	int i=0;
	int j=k-1;
	while(i<k/2)
	{
		cout<<char(str[i])<<char(str[j]);
		i++;
		j--;
	}
	if(k%2!=0)
	cout<<char(str[k/2]);	
	return 0;
}
	
	