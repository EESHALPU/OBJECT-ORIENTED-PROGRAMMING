#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class stu_detail
{
    private:
    int roll,reg;
    char name[20];
    public:
    void get_stu_detail(int r,int rg,char nm[20])
    {
        roll=r;
        reg=rg;
        strcpy(name,nm);
    }
    void show_stu_detail()
    {
        cout<<"Roll="<<roll<<ends<<"Reg="<<reg<<ends<<"Name="<<name<<endl;
    }


};

class result:public stu_detail
{
    public:
    int sub1,sub2,sub3,sub4,sub5;
    public:

    void get_result(int s1,int s2,int s3,int s4,int s5)
    {
        sub1=s1;
        sub2=s2;
        sub3=s3;
        sub4=s4;
        sub5=s5;
    }
     int per;
    void show_result()
    {
        per=(sub1+sub2+sub3+sub4+sub5)/5;
        cout<<"Percentage="<<per<<"%"<<endl;
    }

};

class grade:public result
{
private:
    char grade[3];
    public:
    void show_grade()
    {
        if(per>=90)
            strcpy(grade,"O");
        else if(per>80 && per<90)
        {
              strcpy(grade,"A");
        }
        else if(per>70 && per<80)
        {
              strcpy(grade,"B");
        }
        else if(per>60 && per<70)
        {
              strcpy(grade,"C");
        }

         cout<<"Grade="<<grade<<endl;
    }


};


int main()
{
    grade obj;
    int s1,s2,s3,s4,s5,roll,reg;
    char name[20];
    cout<<"Enter the Student Detail="<<endl;
    cout<<"Enter Roll=";
    cin>>roll;
    cout<<"Enter the Registration number=";
    cin>>reg;
    cout<<"Enter the Name=";
    gets(name);
    cin>>name;
    cout<<"Enter the Five Subject Marks="<<endl;
    cout<<"Subject 1:";
    cin>>s1;
    cout<<"Subject 2:";
    cin>>s2;
    cout<<"Subject 3:";
    cin>>s3;
    cout<<"Subject 4:";
    cin>>s4;
    cout<<"Subject 5:";
    cin>>s5;
    cout<<"______________________"<<endl;

    //calling
    obj.get_stu_detail(roll,reg,name);
    obj.get_result(s1,s2,s3,s4,s4);
    obj.show_stu_detail();
    obj.show_result();
    obj.show_grade();
    return 0;
}
