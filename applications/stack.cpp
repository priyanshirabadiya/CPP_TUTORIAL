// #include <iostream>
// using namespace std;
// #include <process.h>
// class StackOperation
// {
// protected:
//     int a[5], top = -1, max = 5;

// public:
//     void push();
//     void pop();
//     void peep();
//     void update();
//     void display();
// };

// void StackOperation ::push()
// {
//     if (top == max - 1)
//     {
//         cout << "Stack is overFlow." << endl;
//     }
//     else
//     {
//         cout << "Enter element for push:";
//         cin >> a[++top];
//     }
//     display();
// }

// void StackOperation ::pop()
// {
//     int i, value;
//     if (top == -1)
//     {
//         cout << "Stack is underflow." << endl;
//     }
//     else
//     {
//         // value = a[top];
//         cout << "Your poped element on stack is:" << a[top--] << endl;
//         // top = top - 1;
//     }
//     display();
// }

// void StackOperation ::peep()
// {
//     int n;
//     cout << "Enter position(index number) of element which you want to get value : ";
//     cin >> n;
//     if (n - 1 > top)
//     {
//         cout << "Sorry element does not exist." << endl;
//     }
//     else
//     {
//         cout << "Your peeped element is:" << a[n - 1] << endl;
//     }
// };

// void StackOperation ::update()
// {
//     int p, v;
//     cout << "Enter position number which you want to update:";
//     cin >> p;
//     if (p > top - 1)
//     {
//         cout << "Element does not exists.";
//     }
//     else
//     {
//         cout << "Enter new value:";
//         cin >> v;
//         a[p] = v;
//     }
// }

// void StackOperation ::display()
// {
//     int i;
//     if (top == -1)
//     {
//         cout << "Stack is empty." << endl;
//     }
//     else
//     {
//         for (i = 0; i <= top; i++)
//         {
//             cout << "Stack a[" << i << "] :" << a[i] << endl;
//         }
//     }
// }

// int main()
// {
//     int ch, n;
//     StackOperation s1;

//     do
//     {
//         cout << "===============================================" << endl;
//         cout << "Stack operation" << endl;
//         cout << "===============================================" << endl;
//         cout << "1.Push\n2.Pop\n3.Peep\n4.Update\n5.Display\n6.Exit" << endl;
//         cout << "Enter your choice:";
//         cin >> ch;

//         switch (ch)
//         {
//         case 1:
//             s1.push();
//             break;
//         case 2:
//             s1.pop();
//             break;
//         case 3:
//             s1.peep();
//             break;
//         case 4:
//             s1.update();
//             break;
//         case 5:
//             s1.display();
//             break;
//         case 6:
//             exit(0);
//             break;
//         default:
//             cout << "You Have Wrong Choice";
//         }
//         cout << "\n Do you want to continue(1-yes 0-No)";
//         cin >> n;
//     } while (n != 0);
//     return 0;
// }

// -------------------------------- Queue

// #include <iostream>
// using namespace std;
// class Queuecalc
// {
// protected:
//     int front = -1, rear = -1, max = 5, a[5];

// public:
//     void push();
//     void pop();
//     void display();
// };

// void Queuecalc ::push()
// {
//     if (rear == max - 1)
//     {
//         cout << "Queue is Overflow" << endl;
//     }
//     else
//     {
//         cout << "Enter element:";
//         cin >> a[++rear];
//         if (front == -1)
//         {
//             front = 0;
//         }
//     }
//     display();
// }

// void Queuecalc ::pop()
// {
//     if (front == -1)
//     {
//         cout << "Queue is underflow" << endl;
//     }
//     else
//     {
//         cout << "Your popped element is :" << a[front] << endl;
//     }

//     if (front == rear)
//     {
//         front = -1;
//         rear = -1;
//     }
//     else
//     {
//         front++;
//     }
// }

// void Queuecalc ::display()
// {
//     if (rear == -1 || front == -1)
//     {
//         cout << "Queue is empty." << endl;
//     }
//     else
//     {
//         for (int i = front; i <= rear; i++)
//         {
//             cout << "Element is a[" << i << "] : " << a[i] << endl;
//         }
//     }
// }

// int main()
// {
//     int ch, n;
//     Queuecalc qq;
//     cout << "===============================================" << endl;
//     cout << "Queue operation" << endl;
//     cout << "===============================================" << endl;
//     while (n != 0)
//     {
//         cout << "1.push 2.pop 3.display 4.exit Enter your choice: " << endl;
//         cin >> ch;
//         switch (ch)
//         {
//         case 1:
//             qq.push();
//             break;
//         case 2:
//             qq.pop();
//             break;
//         case 3:
//             qq.display();
//             break;
//         case 4:
//             exit(0);
//             break;
//         default:
//             cout << "Wrong choice" << endl;
//             break;
//         }
//         cout << "Enter 1 for continue 0 for exit :";
//         cin >> n;
//     }
// }

#include <iostream>
using namespace std;
class EnterDetails
{
public:
    string productName;
    int quentity, price, calculate;
    void enterDetails()
    {
        cout << "Ente ProductName:";
        cin >> productName;
        cout << "Enter quentity:";
        cin >> quentity;
        cout << "Ente price:";
        cin >> price;
    }
    void calculateData(){
        calculate = quentity * price;
    }
};

class ShowDetails : public EnterDetails{
    public:
    void showDetails(){
        cout<<"\n ProductName is:"<<productName;
        cout<<"\n quentity is:"<<quentity;
        cout<<"\n price is:"<<price;
        cout<<"\n calculate is:"<<calculate;
    }
};

int main(){
    ShowDetails ss;
    ss.enterDetails();
    ss.calculateData();
    ss.showDetails();
    return 0;
}
