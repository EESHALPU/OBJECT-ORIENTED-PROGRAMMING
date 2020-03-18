#include<iostream>
#include<conio.h>
using namespace std;
class stu
{
    int id;
    char name[20];
public:
    friend void operator >>(istream &in, stu &s)
    {
        cout<<"Enter Student Id,Name=";
        in>>s.id>>s.name;
    }

     friend void operator <<(ostream &out, stu &s)
     {   out<<"________________"<<endl;
         out<<"id="<<s.id<<endl;
         out<<"Name="<<s.name<<endl;
         out<<"________________";
     }
};

int main()
{
    stu s;
    cin>>s;
    cout<<s;
    return 0;
}

