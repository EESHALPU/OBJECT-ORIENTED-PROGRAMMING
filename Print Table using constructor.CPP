#include<iostream.h>
#include<conio.h>
class tab
{
	int num;
	public:
	tab(int x)
	{
		num=x;
	}
void show();
};
void tab:: show()
{

	for(int i=1;i<=10;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
}
void main()
{
   int n;
   clrscr();
   cout<<"Enter number=";
   cin>>n;
   tab obj(n);
   obj.show();
   getch();
}