#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;


class stu
{
  private:
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
  cout<<id <<ends<<name <<ends<<add <<ends<<mark<<endl;
 }

int main()
{
    stu s;
    int count=0,i;
    ofstream fout("lpu.txt",ios::out);//("stu.dat" );
    //file.open("stu.data");

    char op;
    do
    {
        s.getStu();
        fout.write((char*)&s,sizeof(s));
        //fout<<id<<"\t";
        //fout<<name<<"\t";
        //fout<<add<<"\t";
       // fout<<mark<<"\n";
        cout<<"One record is created";
        count++;
        cout<<"Any more record student[Y/N]";
        cin>>op;
    }while(op=='y'||op=='Y');
    fout.close();


     ifstream file("lpu.txt",ios::in);
    file.read((char*)&s,sizeof(s));
    cout<<"id\tName"<<endl;
    cout<<"--------------------\n";
    file.seekg(0);
    while(file.read((char*)&s,sizeof(s)))
    {
        s.putStu();

    }
    file.close();


    getch();
}
