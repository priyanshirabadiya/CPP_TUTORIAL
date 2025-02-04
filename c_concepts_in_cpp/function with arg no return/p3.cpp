#include<iostream>
using namespace std;
int add(int n)
{
	int i,sum=0;
	for(i = 1; i < n; i++)  
                     {
                            	 if (n%i == 0)  
                                        		{  
                                               		sum = sum + i;  
                                       		  }  
                      }
	if (sum == n)  
                      	cout<<"Perfect Number"<<endl;  
         	  else  
                      	cout<<"Not Perfect  Number"<<endl;  
}  
int main()
{
	int n;
	cout<<"Enter a number:";  
	cin>>n;      
	add(n);
}