#include<string.h>
#include<iostream.h>
#include<conio.h>
class emp
{
   int empid;
   char empname[20];
   float sal;
   public:
   void getemp(int id,char name[20],float basic);
   void putemp();
};
void emp::getemp(int id,char name[20],float basic)
  {
     empid=id;
     strcpy(empname,name);
     sal=basic;
  }
void emp:: putemp()
  {
     cout<<"Employee id="<<empid<<endl;
     cout<<"Name="<<empname<<endl;
     cout<<"Sal="<<sal;
  }
       void main()
	 {
	    emp c;
	    clrscr();
	    c.getemp(121,"Ishan",23000);
	    c.putemp();
	    getch();
	 }


