#include<iostream.h>
#include<conio.h>
struct stu
{
 int id;
 char name[20];
 void getdata()
   {
    cout<<"Enter the roll and Name";
    cin>>id>>name;
   }
 }s;
 void main()
 {
    clrscr();
    s.getdata();
 }
