#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class circle
{
	int r;
	public:
	circle(int x)
	{
		r=x;
		cout<<"Area of Circle="<<3.14*r*r;
	}
};

class rect:public circle
{
	int l,b;
	public:
	rect(int a,int br):circle(a)
	{
		l=a;
		b=br;
		cout<<"\nArea of rectangle="<<l*b;
	}


};
class square:public rect
{
	int a;
	public:
	square(int s,int t):rect(s,t)
	{
		a=s;
		cout<<"\nArea of Square="<<a*a;
	}
};

void main()
{    clrscr();
	int a,b;
	cout<<"Enter the First Side value/Radius=";
	cin>>a;
	cout<<"Enter the second side value=";
	cin>>b;
	square obj(a,b);
	getch();
}