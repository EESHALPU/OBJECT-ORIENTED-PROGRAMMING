#include<iostream.h>
#include<conio.h>
class test
{
	int n;
     public:
     int prime_num(int x);
};
int test::prime_num(int x)
     {     int flag=0;
	n=x;
	for(int i=2;i<n;i++)
	    {
	       if(n%i==0)
		{
		   flag=1;
		   break;
		}

	    } return flag;
	}
void main()
{

	test obj;
	int r,num;
	clrscr();
	cout<<"enter number";
	cin>>num;
       r=obj.prime_num(num);
       if(r==1)
	   {
		cout<<"Not_Prime";
	   }
       else
		cout<<"Prime";
getch();
}
