#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

//MULTIPLE INHERITANCE WITH STUDENT RECORDS................
class gen_info
{
	private:
	  char area[20], city[20], zip[7];
	public:
	void get_gen_info(char ar[20],char ct[20],char pin[7]);
	void put_gen_info(void);
};
void gen_info::get_gen_info(char ar[20],char ct[20],char pin[7])
{
	strcpy(area,ar);
	strcpy(city,ct);
	strcpy(zip,pin);
}
void gen_info::put_gen_info()
{
	cout<<"Area="<<area<<endl;
	cout<<"City="<<city<<endl;
	cout<<"Zip="<<zip<<endl;
}

class academic_info
{    protected:
	int roll,sub1,sub2;
	char name[20];
	public:
	void get_academic_info(int,char[],int,int);
	void put_academic_info(void);
};
void academic_info::get_academic_info(int r,char nm[20],int s1,int s2)
{
	roll=r;
	strcpy(name,nm);
	sub1=s1;
	sub2=s2;
}
void academic_info::put_academic_info()
{
	cout<<"Roll="<<roll<<ends<<"Name="<<name<<ends<<"Sub1="<<sub1<<ends<<"Sub2="<<sub2<<endl;
}

class result:public gen_info,public academic_info
{
	int total;
   public:
    void display()
    {
	 put_academic_info();
	 put_gen_info();
	 total=sub1+sub2;
	 cout<<"Total="<<total;
    }
};

void main()
{
	result stu;
	int roll,s1,s2;
	char area[20], city[20],zip[7],name[20];
	clrscr();
	cout<<"Enter the Roll=";
	cin>>roll;
	cout<<"Enter Sub 1 Marks=";
	cin>>s1;
	cout<<"Enter sub 2 Marks=";
	cin>>s2;
	cout<<"Enter the name=";
	gets(name);
	cout<<"Enter the Area=";
	gets(area);
	cout<<"Enter the City=";
	gets(city);
	cout<<"Enter Pin code=";
	gets(zip);


	cout<<"________________________________"<<endl;
	stu.get_gen_info(area,city,zip);
	stu.get_academic_info(roll,name,s1,s2);
	stu.display();
	cout<<endl<<"________________________________"<<endl;
	getch();
}
