#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class rect
{
	int l,b;
	public:
	rect(int a,int br)
	{
		l=a;
		b=br;
		cout<<"\nArea of rectangle="<<l*b;
	}


};
class square
{
	int a;
	public:
	square(int s)
	{
		a=s;
		cout<<"\nArea of Square="<<a*a;
	}
};

class circle: public square,public virtual rect
{
	int r;
	public:
	circle(int x,int y):rect(x,y),square(x)
	{
		r=x;
		cout<<"\nArea of Circle="<<3.14*r*r;
	}
};

void main()
{    clrscr();
	int a,b;
	cout<<"Enter the First Side value/Radius=";
	cin>>a;
	cout<<"Enter the second side value=";
	cin>>b;
	circle obj(a,b);
	getch();
}