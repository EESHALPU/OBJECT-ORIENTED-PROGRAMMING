#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

//MULTIPLE INHERITANCE WITH STUDENT RECORDS....
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
{    private:
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
class fitness:public gen_info,public academic_info
{
   private:
	float weight;
	float height;
   public:
	void  get_fitness(float w,float h);
	void  put_fitness(void);
};
void fitness:: get_fitness(float w,float h)
{
	weight=w;
	height=h;
}

void fitness:: put_fitness(void)
{

	cout<<"Weight="<<weight<<"Kg"<<ends<<"Height="<<height<<"inch"<<endl;
}







void main()
{
	fitness stu;
	int roll,s1,s2;
	char area[20], city[20],zip[7],name[20];
	float weight,height;

	clrscr();
	cout<<"Enter the General detail="<<endl;
	cout<<"Enter the name=";
	gets(name);
	cout<<"Enter the Area=";
	gets(area);
	cout<<"Enter the City=";
	gets(city);
	cout<<"Enter Pin code=";
	gets(zip);
	cout<<"-------------------------"<<endl;
	cout<<"Enter the Academic Information="<<endl;
	cout<<"Enter the Roll=";
	cin>>roll;
	cout<<"Enter Sub 1 Marks=";
	cin>>s1;
	cout<<"Enter sub 2 Marks=";
	cin>>s2;
	cout<<"-------------------------"<<endl;
	cout<<"Enter the Fitness detail="<<endl;
	cout<<"Enter the Height=";
	cin>>height;
	cout<<"Enter the weight=";
	cin>>weight;
	cout<<"________________________________"<<endl;
	stu.get_gen_info(area,city,zip);
	stu.get_academic_info(roll,name,s1,s2);
	stu.get_fitness(height,weight);
    stu.put_gen_info();
    stu.put_academic_info();
	stu.put_fitness();
	cout<<endl<<"________________________________"<<endl;
	getch();
}
