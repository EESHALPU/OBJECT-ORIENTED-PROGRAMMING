#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;


class stu
{
  public:
    int id;
    char name[20];
    char add[20];
    int mark;
  public:
    void getStu();
    void putStu();
};

void stu::getStu()
 {
    cout<<"ID Name\tAddress\tMarks"<<endl;
    cin>>id>>name>>add>>mark;
 }
 void stu::putStu()
 {
  cout<<id <<"\t"<<name <<"\t"<<add <<ends<<mark<<endl;
 }

int main()
{
    label:
    stu s;
    int count=0,i,idno;
    char op;

     ifstream file("lpu.txt",ios::in);
    file.read((char*)&s,sizeof(s));

    file.seekg(0);

    cout<<"Enter id =";
    cin>>idno;
    count=0;

    cout<<"id\tName\tAddress\tMarks"<<endl;
    cout<<"-------------------------------\n";

    while(file.read((char*)&s,sizeof(s)))
    {
        if(idno==s.id)
        {
        s.putStu();
        count=1;
        }
    }

    file.close();

    if(count==0) cout<<"No record found";

    cout<<"\nWant to see more record[y/n]";
    cin>>op;
    if(op=='y'||op=='Y')
        goto label;

    getch();
}
