#include<iostream.h>
#include<conio.h>
int area(int);
int area(int,int);
float area(float);
void main()
{
    int side,l,b,r;
    cout<<"Enter the side of square=";
    cin>>side;
    cout<<"Area of square="<< area(side)<<endl;
    cout<<"Enter the lenght,breath of rectangle=";
    cin>>l>>b;
    cout<<"Area of rectangle="<<area(l,b)<<endl;
    cout<<"Enter radius=";
    cin>>r;
    cout<<"Area of circle="<<area(r)<<endl;
}
int area(int x)
{
    return x*x;
}

int area(int x,int y)
{
   return x*y;
}
float area(float x)
{
    return (3.14*x*x);
}
