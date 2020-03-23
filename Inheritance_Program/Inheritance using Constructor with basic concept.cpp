#include<iostream>
#include<conio.h>
using namespace std;
class base
{
    public:

    base() // base class will call first then after derived
    {
        cout<<"Base class destuctor is called"<<endl;
    }
};

class derv: public base
{
    public:
    derv()
    {
        cout<<"Derived class is called"<<endl;
    }
};

int main()
{
    derv d;//obj of des
}
