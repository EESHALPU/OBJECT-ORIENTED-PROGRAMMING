#include<iostream.h>
#include<conio.h>
class emp_detail
     {
	int id;
	char name[20];
	float sal;
     public:
       void  getemp();
       void putemp();
     };
     void emp_detail::getemp()
       {
	  cout<<"Enter the id of employee=";
	  cin>>id;
	  cout<<"Enter the name of employee";
	  cin>>name;
	  cout<<"Enter the salary=";
	  cin>>sal;
       }

     void emp_detail::putemp()
       {
	  cout<<"id="<<id<<ends;
	  cout<<"Name="<<name<<ends;
	  cout<<"Salary="<<sal<<endl;
       }
void main()
    {
       emp_detail obj[3];
       clrscr();

       for(int i=0;i<3;i++)
       {
	 obj[i].getemp();

       }

       for(i=0;i<3;i++)
       {
	 obj[i].putemp();
       }
    getch();
}
