#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter ch:";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"your ch is vowel";
	}
	else
	{
		cout<<"your ch is consonant";
	}
	return 0;
}