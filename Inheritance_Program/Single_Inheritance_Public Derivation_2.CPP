#include<iostream.h>
#include<conio.h>
class stu
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

class phy : public stu
{
	float h,w;
	public:
	void get_phy()
	{
		cout<<"Enter Stu height=";
		cin>>h;
		cout<<"Enter stu width=";
		cin>>w;
	}
	void put_phy()
	{
		cout<<"Height="<<h<<endl;
		cout<<"Width="<<w;
	}
};


void main()
{
	phy p;
	clrscr();
	p.get_stu();
	p.get_phy();
	p.put_stu();
	p.put_phy();
	getch();
}