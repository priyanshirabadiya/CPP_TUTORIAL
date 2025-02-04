#include <iostream>
using namespace std;
class members
{
    int number;
    char destination[50];
    float distance;
    float fule;
    int tina;
    int CALFUEL()
    {
        if (distance <= 1000)
            return 500;
        else if (distance <= 2000)
            return 1000;
        else
            return 2000;
    }

public:
    void FEEDINEO()
    {
        cout << "enter number:";
        cin >> number;
        cout << "enter destination:";
        cin >> destination;
        cout << "enter distance:";
        cin >> distance;
        cout << "enter fule:";
        cin >> fule;
        tina = CALFUEL();
    }

    void SHOWINF()
    {
        cout << "\nnumber\tdestination\tdistance\tfule\ttina";
        cout << "\n"
             << number << "\t" << destination << "\t\t" << distance << "\t\t" << fule << "\t" << tina;
    }
};
int main()
{
    members h;
    h.FEEDINEO();
    h.SHOWINF();
}
