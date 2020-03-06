#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
class stu_gen_info
{
	int roll;
	char name[20],email[20],add[20],phone[10];
	public:
	void get_stu_gen_info(int r,char nm[20],char address[20],char em[20],char ph[20])
	{
	     roll=r;
	     strcpy(name,nm);
	     strcpy(add,address);
	     strcpy(email,em);
	     strcpy(phone,ph);
	}

	void put_stu_gen_info()
	{
		cout<<"Roll"<<roll<<ends<<"Name="<<name<<ends<<"Email="<<email<<ends<<"Address="<<add<<ends<<"Phone"<<phone<<endl;
	}
};

class stu_academic_info:public stu_gen_info
{
	private:
	int s1,s2,s3,per_mark,scholarship;
	char grade;
	public:
	void get_stu_academic_info(int sub1,int sub2,int sub3)
	{
		s1=sub1;
		s2=sub2;
		s3=sub3;
		per_mark=(s1+s2+s3)/3;
		if(per_mark>=90)
		{
			grade='A';
			scholarship=50;
		}
		else if(per_mark>=80&&per_mark<90)
		{
			grade='B';
			scholarship=40;
		}
		else if(per_mark>=70&&per_mark<80)
		{
			grade='C';
			scholarship=30;
		}
		else
		{
			grade='D';
			scholarship=20;
		}
	}
	void put_stu_academic_info()
	{
		cout<<"% mark="<<per_mark<<ends<<"Scholarship="<<scholarship<<"%"<<ends<<"Grade="<<grade<<endl;
	}
};

class stu_phy_info:public stu_academic_info
{
	int height,weight;
	public:
	void get_stu_phy_info(int h,int wg)
	{
		height=h;
		weight=wg;
	}
	void put_stu_phy_info()
	{
		cout<<"Height="<<height<<ends<<"Weight="<<weight<<endl;
	}
};


void main()
{
	int roll,s1,s2,s3,h,w;
	char name[20],add[20],email[20],phone[10];
	cout<<"Enter the General info...."<<endl;
	cout<<"Enter Roll=";
	cin>>roll;
	cout<<"Enter the Name=";
	gets(name);
	flushall();
	cout<<"Enter the Email=";
	gets(email);
	flushall();
	cout<<"Enter the Address=";
	gets(add);
	flushall();
	cout<<"Enter the Phone No=";
	gets(phone);
	flushall();

	cout<<"Enter the Academic Info............."<<endl;
	cout<<"Enter the three subject marks=";
	cin>>s1>>s2>>s3;
	cout<<"Enter the Physical info.............."<<endl;
	cout<<"Enter the height and weight=";
	cin>>h>>w;

	stu_phy_info obj;

       obj.get_stu_gen_info(roll,name,add,email,phone);
	obj.get_stu_academic_info(s1,s2,s3);
	obj.get_stu_phy_info(h,w);
	obj.put_stu_gen_info();
	obj.put_stu_academic_info();
	obj.put_stu_phy_info();
getch();
}
