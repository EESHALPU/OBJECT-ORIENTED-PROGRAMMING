#include<iostream.h>
#include<conio.h>
  class circle
    {
       float r;
    public:
       circle()
       {
	 r=5;
       }
       circle(float r)
       {
	  (*this).r=r;
       }
    void showarea()
       {
	  cout<<"Area of circle="<<3.14*r*r<<endl;
       }
    };

  void main()
    {
       circle c1;
       circle c2(10);         clrscr();
       c1.showarea();
       c2.showarea();
	getch();
    }
