
#include<iostream>
#include<conio.h>
using namespace std;

class test
{
    int a;
    public:
    void operator ++(int)
    {
        a=0;
        a++;
    }

    void operator --(int)
    {
        a--;
    }

    void show()
    {

        cout<<a<<endl;
    }
};

int main()
{
    test t;
    t++;
    t.show();
    t--;
    t.show();


}
