// syntax
#include <iostream>
using namespace std;
int main()
{
    int i, eng[5], maths[5];
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter eng:";
        cin>>eng[i];
        cout<<"Enter maths:";
        cin>>maths[i];
    }
    for(int j = 0 ; j < 2 ; j++)
    {
        cout<<"English marks is:"<<eng[j];
        cout<<"maths marks is:"<<maths[j];
    }
    return 0;
}
