#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;
class stu_info
{
protected:
    int roll_number,reg_no;
    char name[20];
public:
    void get_stu_info(int r, int rg, char n[20])
    {
        roll_number=r;
        reg_no=rg;
        strcpy(name,n);
    }
    void put_stu_info(void)
    {
        cout<<"Roll="<<roll_number<<ends<<"Reg.NO="<<reg_no<<ends<<"Name="<<name<<endl;
    }

};

class exam:virtual public stu_info
{
    int cpp,os,ds,cod,mgn,math;
public:

    void get_exam_info(int cplus,int ops,int datas,int c_org,int mn,int mth)
    {
        cpp=cplus;
        os=ops;
        ds=datas;
        cod=c_org;
        mgn=mn;
        math=mth;
    }
     int total;
    void put_exam_info(void)
    {

        total=cpp+os+ds+cod+mgn+math;
        cout<<"Total_Marks="<<total<<endl;
    }
};

class physical:virtual public stu_info
{
    float height;
    int weight;

public:
    void get_physical_info(float h,int w)
    {
        height=h;
        weight=w;

    }
    void put_physical_info(void)
    {
        cout<<"Height="<<height<<"Feet"<<ends<<"Weight="<<weight<<"Kg"<<endl;
    }
};

class result:public exam,public physical
{
    public:
    void put_result(void)
    {
        float per;
        put_stu_info();
        put_exam_info();
        per=total/5;
        put_physical_info();
        cout<<"Result="<<per<<"%"<<endl;
    }
};

int main()
{
  int roll,reg,cpp,ds,os,cod,mgn,math,weight;
  char name[20];
  float height;
  result obj;
  cout<<"Enter the Student Info="<<endl;
  cout<<"Enter Roll No=";
  cin>>roll;
  cout<<"Enter Reg No=";
  cin>>reg;
  cout<<"Enter the Name=";
  cin>>name;
  cout<<"____________________________________"<<endl;
  cout<<"Enter the Examination_detail="<<endl;
  cout<<"Enter the C Plus Plus Marks=";
  cin>>cpp;
  cout<<"Enter the Data structure marks=";
  cin>>ds;
  cout<<"Enter the Operating System Marks=";
  cin>>os;
  cout<<"Enter the Computer Organization Marks=";
  cin>>cod;
  cout<<"Enter the Management marks=";
  cin>>mgn;
  cout<<"Enter the Mathematics Marks=";
  cin>>math;
  cout<<"________________________________"<<endl;
  cout<<"Enter the Physical Information="<<endl;
  cout<<"Enter the height(in feet)=";
  cin>>height;
  cout<<"Enter the weight=";
  cin>>weight;
  //function calling

  obj.get_stu_info(roll,reg,name);
  obj.get_exam_info(cpp,os,ds,cod,mgn,math);
  obj.get_physical_info(height,weight);
    cout<<"____________________________________"<<endl;
  obj.put_result();
  getch();
}
