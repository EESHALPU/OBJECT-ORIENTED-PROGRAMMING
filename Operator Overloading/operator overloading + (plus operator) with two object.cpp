#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>

using namespace std;
class plus_op_overloading
{
    char st[100];
    public:
    void read()
    {
        cout<<"Enter string=";
        gets(st);
    }
    void show()
    {
        cout<<"String="<<st<<endl;
    }

    plus_op_overloading operator + (plus_op_overloading t2)
    {
        plus_op_overloading t3;
        strcpy(t3.st,st);
        strcat(t3.st," ");
        strcat(t3.st,t2.st);
        cout<<t3.st<<endl;
        return t3;
    }
};

int main()
{

    plus_op_overloading t1,t2,t3;
    t1.read();
    t2.read();
    t3=t1+t2;
    t3.show();

}
