#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>

using namespace std;
class complex
{
    float img;
    float real;
    public:
        void input()
        {
            cout<<"Enter the img no=";
            cin>>img;
            cout<<"Enter the real no=";
            cin>>real;

        }

        complex operator + (complex t2)
        {
            complex t3;
            t3.img=img+t2.img;
            t3.real=real+t2.real;
            return t3;
        }

        void output()
        {
            cout<<"img="<<img<<ends<<"real="<<real<<endl;
        }
};

int main()
{

    complex c1,c2,result;
    cout<<"Enter the first complex number=="<<endl;
    c1.input();
    cout<<"Enter the second complex number="<<endl;
    c2.input();
    result=c1+c2;
    cout<<"Sum of the both object complex number="<<endl;
    result.output();

}
