#include<iostream.h>
#include<conio.h>
class fact
     {
	int num,res;
	public:
	void getnum(int n);
	void getres();
     };
void fact::getnum(int n)
    {

	res=n;
	for(int i=1;i<n;i++)
	  {
	     res=res*i;
	  }
    }
void fact::getres()
      {
	 cout<<"Factorial of number="<<res;
      }

void main()
{
    fact obj;
    int n;
    clrscr();
    cout<<"Enter the number=";
    cin>>n;
    obj.getnum(n);
    obj.getres();
    getch();
}

