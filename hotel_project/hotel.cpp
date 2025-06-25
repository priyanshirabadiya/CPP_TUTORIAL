#include <iostream>
using namespace std;
class Hotel1
{
    public:
    int  chesedosa=500,dosa=200,puf=200,burger=300,pizza=500,sendvich=400,taxAmount,Cost3,Cost4,Cost5,Cost6 ,
    Cost2,Cost1,totalCost,discount=0,realtotal,quntity,tCost,quntity1,quntity2,quntity3,quntity4,quntity5,quntity6;

    double taxamt = 0.8;
    int choice;
    char n[20];
    int m;

    void print()
    {
        cout<<"\t""\t"<<"Welcome to dhaba entertainment" << endl;
        cout<<"enter your name : ";
        cin>>n;
        cout<<"enter your mobile number : ";
        cin>>m;
  
        cout<<"1. dosa               200"<<endl;
        cout<<"2. chese dosa         500"<<endl;
        cout<<"3. puf                200"<<endl;
        cout<<"4. burger             300"<<endl;
        cout<<"5. pizza              500"<<endl;
        cout<<"6. sendvich           400"<<endl;
        cout<<"7. exit" << endl;
    }
};
class Hotel2 : public Hotel1
{
    public:
    void print_start()
    {
        do{  
       cout <<"Select item: ";
       cin >> choice;

        switch(choice) 
        {
            case 1:
            {
                cout << "\t" <<"dosa" << endl << endl;
                cout<<"enter quntity:"<<endl;
                cin>>quntity1;
                Cost1=dosa*quntity1;
             cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
              cout<<"dosa"<<"\t""\t"; cout<<quntity1<<"\t""\t"; cout<<Cost1<<endl;
            }
            break;
            case 2:
            {
                cout << "\t" <<"chese dosa" << endl << endl;
                cout<<"enter quntity:"<<endl;
                cin>>quntity2;
                Cost2=chesedosa*quntity2;
                 cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
                 cout<<"chese dosa"<<"\t"; cout<<quntity2<<"\t""\t"; cout<<Cost2<<endl;
            }
            break;   
            
            case 3:
            {
                cout << "\t" <<"puf" << endl << endl;
                cout<<"enter quntity:"<<endl;
                cin>>quntity3;
                Cost3=puf*quntity3;
                 cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
                 cout<<"puf"<<"\t"<<"\t"; cout<<quntity3<<"\t""\t"; cout<<Cost3<<endl;
            }
            break;  

            case 4:
            {
                cout << "\t" <<"burger" << endl << endl;
                cout<<"enter quntity:"<<endl;
                cin>>quntity4;
                Cost4=burger*quntity4;
                 cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
                 cout<<"burger"<<"\t"<<"\t"; cout<<quntity4<<"\t""\t"; cout<<Cost4<<endl;
            }
            break;  

            case 5:
            {
                cout << "\t" <<"pizza" << endl << endl;
                cout<<"enter quntity:"<<endl;
                cin>>quntity5;
                Cost5=pizza*quntity5;
                 cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
                 cout<<"pizza"<<"\t"<<"\t"; cout<<quntity5<<"\t""\t"; cout<<Cost5<<endl;
            }
            break; 

            case 6:
            {
                cout << "\t" <<"sendvich" << endl << endl;
                cout<<"enter quntity:"<<endl;
                cin>>quntity6;
                Cost6=sendvich*quntity6;
                 cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
                 cout<<"sendwich"<<"\t"; cout<<quntity6<<"\t""\t"; cout<<Cost6<<endl;
            }
            break;

            case 7:
            {
                cout << "!---EXIT---!" << endl;
            }
            break;
            
            default:

{
                cout<<" wrong choice" << endl;
            }
            
        }
    }   
        while(choice != 7);
        cout << "\nCustomer name : "<<n<<endl;
        cout << "Customer mobile no. : "<<m<<endl;
        cout<<"iteam"<<"\t""\t";
        cout<<"quntity"<<"\t""\t"; 
        cout<<"cost""\t""\t"<<endl; 
        if(Cost1>0)
        {
            cout<<"dosa"<<"\t"<<"\t"; cout<<quntity1<<"\t""\t"; cout<<Cost1<<endl;
        }
        if(Cost2>0)
        {
           cout<<"chese dosa"<<"\t"; cout<<quntity2<<"\t""\t"; cout<<Cost2<<endl;
        }
        if(Cost3>0)
        {
           cout<<"chese"<<"\t"<<"\t"; cout<<quntity3<<"\t""\t"; cout<<Cost3<<endl;
        }
        if(Cost4>0)
        {
            cout<<"burger"<<"\t"<<"\t"; cout<<quntity4<<"\t""\t"; cout<<Cost4<<endl;
        }
        if(Cost5>0)
        {
            cout<<"pizza"<<"\t"<<"\t"; cout<<quntity5<<"\t""\t"; cout<<Cost5<<endl;
        }
        else if(Cost6>0)
        {
            cout<<"sendvich"<<"\t"; cout<<quntity6<<"\t""\t"; cout<<Cost6<<endl;
        }
        else 
        {
           cout<<""<<endl;
        }

        totalCost = Cost1 + Cost2 + Cost3 + Cost4 + Cost5 + Cost6;

        taxAmount =totalCost*taxamt;
        tCost = taxAmount+totalCost;
        cout<<"------------------------------------"<<endl;
        cout << "totalCost"<<"\t"<<"\t"<<"\t"<<totalCost<<endl;
        cout << "Tax Amount"<<"\t"<<"\t"<<"\t"<<taxAmount<<endl;
        cout<<"without discount"<<"\t"<<"\t"<<tCost<<endl;
        cout<<"-------------------------------------";
        cout<<"\nCongrats!you get 15% discount"<<endl;
        if(totalCost>50)
        {
            discount = (tCost*15)/100;
            realtotal = tCost-discount;
        }
        cout<<"Discount is"<<"\t"<<"\t"<<"\t"<<discount << endl;
        cout<<"------------------------------------"<<endl;
        cout<<"Your total with discount is"<<"\t"<<realtotal << endl;
        cout<<"------------------------------------"<<endl;
        cout<<"THANK YOU !!!! "<<endl;
    }
    
}ht;
int main()
{
    ht.print();
    ht.print_start();
}