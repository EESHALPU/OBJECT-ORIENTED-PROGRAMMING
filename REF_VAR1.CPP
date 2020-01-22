#include<iostream.h>
#include<conio.h>
      /*	void swap(int &a,int &b)
	{
	   int temp=a;
	   a=b;
	   b=temp;
	}
	void main()
	{
	  int a=10,b=20;
	  clrscr();
	   cout<<"a="<<a<<ends<<"b="<<b<<endl;
	  swap(a,b);
	  cout<<"a="<<a<<ends<<"b="<<b;     */
	void main()
	{
	  int a=100;
	  int &b=a;
	  int &c=b;
	  clrscr();
	 cout<<"a="<<a<<ends<<"b="<<b<<"c="<<c<<endl;
	 cind>>c;
	 cout<<"a="<<a<<ends<<"b="<<b<<"c="<<c;
	  getch();
	}
