#include<conio.h>
#include<iostream.h>
class test
{
	int a;
	static int b;
	public:
	void get(int x)
	{
		a=x;
		b++;
	}
	void disp();
       static void show_b()
       {
		cout<<"B="<<b<<endl;
       }
};
	void test::disp()
	{
	       static int c=5;
		cout<<"c="<<c<<endl;
		c++;
		cout<<"C="<<c;
	}

	int test::b;
	void main()
	{
		 test obj1,obj2;
		 clrscr();
		 obj1.get(100);
		 obj1.get(200);
		 obj1.show_b();
		 obj1.disp();
		 obj1.disp();
		 getch();
	}
