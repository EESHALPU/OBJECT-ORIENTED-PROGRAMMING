#include<iostream>
#include<conio.h>
using namespace std;
class base
{
    public:

    base()
    {
        cout<<"Base class constructor is called"<<endl;
    }

    virtual ~base()// without virtual only base destructor is called.
    {
        cout<<"Base class destructor is called"<<endl;
    }
};

class derv: public base
{
    public:

    derv()
    {
        cout<<"Derived class constructor is called"<<endl;
    }
    ~derv()    //in destructor derived class  is called but in constructor base first
    {
        cout<<"Derived class destructor is called"<<endl;
    }
};

int main()
{
    base *b=new derv();  //pointer of base class obj assigned with derived class object
    delete b;
    //derv d;//obj of des
}
