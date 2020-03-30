#include<iostream>
#include<conio.h>
using namespace std;
class rupee_conversion
{
    int rupee;
    public:
    void display(int dollar)
    {
        rupee=dollar*70;
        cout<<"Rupee="<<rupee;
    }

};

int main()
{
    rupee_conversion obj;
    int dollar;
    cout<<"Enter the Amount in Us dollar=";
    cin>>dollar;
    if(dollar<0)
    {
        cout<<"Wrong Input";

    }
    else
    {
       obj.display(dollar);
    }
}
