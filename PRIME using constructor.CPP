#include<iostream.h>
#include<conio.h>
class prime
{
	int check();
	int n;
	public:
	prime(int x)
	{
	    n=x;
	}

	void disp();
};

 void prime::disp()
 {
	if(check())
	{
	  cout<<"Prime";
	}
	else
	{
	  cout<<"Not Prime";
	}
 }
 int prime::check()
 {
	int f=1;
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(!(n%i))
		{
			f=0;
			break;
		}

	}
   return f;
}

void main()
{
	int a;
	clrscr();
	cout<<"Enter no=";
	cin>>a;
	prime obj(a);
	obj.disp();
	getch();
}