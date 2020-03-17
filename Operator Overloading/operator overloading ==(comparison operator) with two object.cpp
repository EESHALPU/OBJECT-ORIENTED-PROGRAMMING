#include<iostream>
#include<conio.h>
using namespace std;
class test
{
    int a;
    public:
    void get()
    {
        cin>>a;

    }
    void operator ==(test t2)
    {
        if(a==t2.a)
        {
            cout<<"Object are equal";
        }
        else
        {
            cout<<"Object are not equal";
        }
    }
};


int main()
{
    test t1,t2;
    cout<<"Enter the t1 object value=";
    t1.get();
    cout<<"Enter the t2 object value=";
    t2.get();
    t1==t2;
    return 0;
}


