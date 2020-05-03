#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;

    try
    {
        cout<<"Enter value of A=";
        cin>>a;
        cout<<"Enter value of B=";
        cin>>b;
        if(b==0) throw 0;

        cout<<"Division="<<a/b;

    }

    catch(int x)
    {
        cout<<"\nDivision not Possible !!!!!";
    }

    getch();
}
