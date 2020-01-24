#include<iostream.h>
#include<conio.h>
class test
{
      int a,b;
      friend void disp(test);
};
void disp(test t)
{
      t.a=10;
      t.b=20;
      cout<<"a="<<t.a<<ends;
      cout<<"b="<<t.b<<endl;
}

void main()
{
     test t;
     clrscr();
     disp(t);
     getch();
}
