#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    try
    {
        cout<<"Testing any Exception..\n";
        //throw 10;
        throw 'A';
        //throw 2.3;
    }

    catch(...)
    {
        cout<<"Catch the thrown value";
    }
    getch();
}
