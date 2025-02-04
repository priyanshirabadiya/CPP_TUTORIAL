#include<iostream>
using namespace std;
struct data{
	int p;
	char p1[20];
	int rate,qty,amt,dis,billamt,gst,netbill;
};
int main()
{
	struct data a[5];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"enter products number:";
		cin>>a[i].p;
		cout<<"enter  products name:";
		cin>>a[i].p1;
		cout<<"enter  rate:";
		cin>>a[i].rate;
		cout<<"enter  qty:";
		cin>>a[i].qty;
	}
	cout<<"\n\nproducts no\tproducts name\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill";
	for(i=0;i<2;i++)
	{
		a[i].amt=a[i].rate*a[i].qty;
		a[i].dis=a[i].amt/100*5;
		a[i].billamt=a[i].amt-a[i].dis;
		a[i].gst=a[i].billamt/100*18;
		a[i].netbill=a[i].billamt+a[i].gst;
		cout<<"\n"<<a[i].p<<"\t\t"<<a[i].p1<<"\t\t"<<a[i].rate<<"\t"<<a[i].qty<<"\t"<<a[i].amt<<"\t"<<a[i].dis<<"\t"<<a[i].billamt<<"\t"<<a[i].gst<<"\t"<<a[i].netbill;
	}
}