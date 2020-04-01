#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>

using namespace std;
class negative_op
{
    int num;
    public:
    void read(int n)
    {

        num=n;

    }
    void show()
    {
        cout<<"Difference of Two object="<<num;
    }

    negative_op operator -(negative_op t2)
    {
        negative_op t3;
        t3.num=num-t2.num;
        return t3;
    }
};

int main()
{

    negative_op t1,t2,t3;
    int n1,n2;
    cout<<"Enter the First Number=";
    cin>>n1;
    t1.read(n1);
    cout<<"Enter the Second Number=";
    cin>>n2;
    t2.read(n2);
    t3=t1-t2;
    t3.show();

}
