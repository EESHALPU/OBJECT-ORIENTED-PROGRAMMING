#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
      int n=15;
        int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j=1;j<=(n-i)-1;j++)
            {
               cout<<" ";
            }
            for(k=0;k<=i;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
}
