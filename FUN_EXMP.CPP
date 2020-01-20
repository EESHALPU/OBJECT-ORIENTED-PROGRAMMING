#include<iostream.h>
#include<conio.h>
class stu
{
 int id;
 char name[20];
 public:
 void readstu()
 {
   cout<<"Enter the Id,Name ";
   cin>>id>>name;
 }
 void showstu();
};
void stu::showstu()
{
  cout<<"Id="<<id<<endl;
  cout<<"Name="<<name;
}
void main()
{
   stu s1;
   clrscr();
   s1.readstu();
   s1.showstu();
   getch();
}