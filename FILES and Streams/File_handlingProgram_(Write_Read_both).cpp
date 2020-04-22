#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class stu
{
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
    cout<<"Enter ID=";
    cin>>id;
    cout<<"Enter Name=";
    fflush(stdin);
    gets(name);
    cout<<"Enter Address=";
    gets(add);
    cout<<"Enter Marks=";
    cin>>mark;

 }
 void stu::putStu()
 {
  cout<<id <<ends<<name <<ends<<add <<ends<<mark<<endl;
 }

int main()
{
    stu s;
    ofstream fout("stu.txt");//("stu.dat" );
    //file.open("stu.data");

    char op;
    do
    {
        s.getStu();
        fout.write((char*)&s,sizeof(s));
        cout<<"One record is created";
        cout<<"Any more record student[Y/N]";
        cin>>op;
    }while(op=='y'||op=='Y');
    fout.close();


    ifstream fin("stu.txt");
    fin.seekg(0);
    fin.read((char*)&s,sizeof(s));
    cout<<"id  Name\t Address\tMarks"<<endl;
    cout<<"--------------------\n\n";
    while(!fin.eof())
    {
        s.putStu();
        fin.read((char*)&s,sizeof(s));
    }
    fin.close();
    getch();
}
