#include<iostream.h>
#include<conio.h>
class fab
{
	int n,a,b;
	public:
	fab(int x)
	{
		n=x;
	}

	void disp();
};
void fab:: disp()
{    a=0;
	b=1;
	int i=1;
	int temp;
	cout<<a<<ends<<b<<ends;
	while(i<n-1)
	{
		temp=a+b;
		a=b;
		b=temp;
		cout<<b<<ends;
		i++;
	}

}
void main()
{
	int n;
	clrscr();
	cout<<"Enter No. of times for fabonnacci series=";
	cin>>n;
	fab obj(n);
	obj.disp();
	getch();
}

