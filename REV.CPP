#include<iostream.h>
#include<conio.h>
class rev
   {
      int num,reverse,r;
      public:
      void getrev( int n);
      void putrev();
   };
   void rev::getrev(int n)
       {
	 num=n;
	 reverse=0;
	 while(n!=0)
	 {
	 r=n%10;
	 n=n/10;
	 reverse=r+(reverse*10);
	 }
       }
       void rev::putrev()
       {
	  cout<<"Reverse of Number is= "<<reverse;
       }
   void main()
   {
     rev obj;
     int n;
     clrscr();
     cout<<"Enter the number";
     cin>>n;
     obj.getrev(n);
     obj.putrev();
     getch();
   }