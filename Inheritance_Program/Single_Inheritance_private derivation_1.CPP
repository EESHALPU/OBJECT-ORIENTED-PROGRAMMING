#include<iostream.h>
#include<conio.h>
class stu         //base class
{
	private:
	int id;
	char name[20];
	public:
	void get_stu()
	{
		cout<<"Enter the id=";
		cin>>id;
		cout<<"Enter Name=";
		cin>>name;
	}
	void put_stu()
	{
		cout<<"Id="<<id<<endl;
		cout<<"Name="<<name<<endl;
	}
};

class phy : private stu  //private derivation
{
	float h,w;
	public:
	void get_phy()
	{    get_stu();              // call by public because can't be call outside reason due to private derivation
		cout<<"Enter Stu height=";
		cin>>h;
		cout<<"Enter stu width=";
		cin>>w;
	}
	void put_phy()
	{   	put_stu();	//call by public section of the class of base class
		cout<<"Height="<<h<<endl;
		cout<<"Width="<<w;
	}
};


void main()
{
	phy p;
	clrscr();
    //	p.get_stu();
	p.get_phy();
    //	p.put_stu();
	p.put_phy();
	getch();
}