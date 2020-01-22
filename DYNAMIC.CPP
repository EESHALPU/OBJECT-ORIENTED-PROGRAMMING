#include<iostream.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 cout<<"Enter the size of array ";
 cin>>n;

 int *p=new int[n];
 for(int i=0;i<n;i++)
      cin>>p[i];

 for(i=0;i<n;i++)
      cout<<p[i];

 delete p;
 getch();

}