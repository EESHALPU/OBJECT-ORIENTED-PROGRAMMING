#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[50],i;
    int m1=0,m2=0,n;
    cout<<"Enter the Number of Elements:=>";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }

    cout<<"Elements are=>";
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<"First Max Element is=>";
    for(i=0;i<n;i++)
    {
      if(a[i]>m1)
      {
          m1=a[i];
      }
    }
    cout<<m1<<endl;

    cout<<"Second Max Element is=>";
    for(i=0;i<n;i++)
    {
      if(a[i]<m1 && a[i]>m2)
      {
          m2=a[i];
      }
    }
    cout<<m2<<endl;



}




