#include<iostream>
#include<conio.h>
class distance
{
    int km,m,cm;
   public:
    void add(distance,distance);
    void disp();
    void get();
};
   void distance::get()
  {
     int x,y,z;
     cout<<"Enter Distance in  km,m,cm=";
     cin>>x>>y>>z;
     km=x;
     m=y;
     cm=z;
  }

  void distance:: disp()
      {
	 cout<<"KM="<<km<<endl<<"M="<<m<<endl<<"cm="<<cm<<endl;
      }

  void distance::add(distance t1,distance t2)
     {   int temp;
	 km=t1.km+t2.km;
	 m=t1.m+t2.m;
       cm=t1.cm+t2.cm;
	 if(cm>=100)
	    {
	       temp=cm/100;
	       m=m+temp;
	       cm=cm%100;
	    }
	 if(m>=1000)
	   {
	      temp=m/1000;
	      km=km+temp;
	      m=m%1000;
	   }
     }

   main()
   {
       distance t1,t2,t3;
       int x,y,z;
       clrscr();
       cout<<"Enter first distance="<<endl;
       t1.get();
	cout<<"Enter second distance="<<endl;
       t2.get();
       cout<<"___________________________________"<<endl;
	cout<<"Value of first distance="<<endl;
       t1.disp();
       cout<<"Value of second distance="<<endl;
       t2.disp();
       t3.add(t1,t2);
       cout<<"Sum="<<endl;
       t3.disp();
       getch();
   }
