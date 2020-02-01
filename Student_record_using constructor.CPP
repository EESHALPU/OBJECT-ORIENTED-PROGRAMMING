#include<iostream.h>
#include<conio.h>
#include<string.h>
class stu_record
{
	int roll,mark;
	char name[20];
	public:
	stu_record(int r,char n[20],int m)
	{
	    roll=r;
	    mark=m;
	    strcpy(name,n);
	}
	void disp();
};

void stu_record::disp()
{
	cout<<"Roll="<<roll<<ends<<"Name="<<name<<ends<<"Marks="<<mark<<endl;
}
void main()
{
  int roll,mark;
  char name[20];
  cout<<"Enter Roll,Name,Mark=";
  cin>>roll>>name>>mark;
  stu_record obj(roll,name,mark);
  obj.disp();
  getch();
}
