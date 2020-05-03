#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    try
    {
        cout<<"Welcome\n";

        try
        {
            cout<<"To inner try block\n";
            throw 10;
        }

        catch(int x)
        {
            cout<<"Throw working\n";
            throw x;
        }
    }

        catch(int y)
        {
            cout<<"outer try block\n";
        }

}
