#include<iostream>
#include<conio.h>
using namespace std;
class base
{
    public:

    ~base()
    {
        cout<<"Base class destuctor is called"<<endl;
    }
};

class derv: public base
{
    public:

    ~derv()    //in desctructor derived class  is called but in constructor base first
    {
        cout<<"Derived class is called"<<endl;
    }
};

int main()
{
    derv d;//obj of des
}
