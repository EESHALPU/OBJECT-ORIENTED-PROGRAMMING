#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
    public:

    Test()
    {
        cout<<"I am Constructor\n";
    }

    ~Test()
    {
        cout<<"I am Destructor\n";
    }
};


int main()
{
    try
    {
        cout<<"Welcome to the Exp handling\n";
    Test t;
    throw 10;
    cout<<"Testing Destructor\n";
    }
    catch(...)
    {
        cout<<"Thank You!!!\n";
    }

    getch();
}
