#include<iostream>
using namespace std;
int main()
{
	char str[20],str1[20];
	int i,j,k=0;
	cout<<"Enter string: ";
	gets(str);
	cout<<"Enter string: ";
	gets(str1);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	j= i-1;
	while(k<=j)
	{
		str[i++]=str1[k];
		k++;
	}
	str[i]='\0';
	cout<<str;
	return 0;
}
	
	