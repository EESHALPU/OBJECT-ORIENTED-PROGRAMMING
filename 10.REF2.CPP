#include<iostream.h>
#include<conio.h>
void main()
{
  int a=20,&b=a;
  clrscr();
  cout<<"a="<<a <<ends<<"b="<<b;
  b=55;
  cout<<endl<<"after initilization in b ";
  cout<<"a="<<a <<ends<<"b="<<b;
getch();
}
