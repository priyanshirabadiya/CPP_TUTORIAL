#include<iostream>
using namespace std;
int add()
{
	char str[20],str1[20];
	int i,j,k=0;
	cout<<"Enter string:";
	gets(str);
	cout<<"Your string is:"<<str;
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	cout<<"\nresvers string:";	
	j=i-1;
	while(k<=i)
	{
		str1[k]=str[j];
		j--;
		k++;
	}
	str1[k]='\0';
	cout<<str1;
}
int main()
{
	add();
}
	
	