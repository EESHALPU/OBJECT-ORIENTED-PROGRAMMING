#include<iostream.h>
#include<conio.h>
class fac
{
	int n;
	public:
	fac(int x)
	{
		n=x;
	}
	void disp();
};

void fac::disp()
{
	int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n-=1;
	}
	 cout<<"Factorial="<<fact;
 }
void main()
{
	int num;
	clrscr();
	cout<<"Enter the number=";
	cin>>num;
	fac obj(num);
	obj.disp();
	getch();
}
