#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	public:
	void show()
	{
		cout<<"Class A is called\n";
	}
};

class B:public virtual A
{
	public:
	void show_b()
	{
		cout<<"Class B is  called\n";
	}
};


class C:public virtual A
{
	public:
	void show_c()
	{
		cout<<"Class C is  called\n";
	}
};

class D:public C,public B
{
	public:
	void show_d()
	{
		cout<<"Class D is called\n";
	}
};


void main()
{
	D obj;
	clrscr();
	obj.show();
	obj.show_d();
	getch();
}
