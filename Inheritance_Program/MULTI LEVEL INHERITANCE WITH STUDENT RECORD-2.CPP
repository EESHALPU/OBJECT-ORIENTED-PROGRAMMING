//Multilevel inheritance...............
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class student          //class student for getting roll number
{
	protected:
	int roll_number;
	public:
	void get_number(int);
	void put_number(void);
};
void student::get_number(int r)
{
	roll_number=r;
}
void student::put_number(void)
{
	cout<<"Roll number="<<roll_number<<endl;
}

class test:public student                 //test class for subject marks
{
	protected:
	float sub1,sub2;
	public:
	void get_marks(float,float);
	void put_marks(void);
};
void test::get_marks(float s1,float s2)
{
	sub1=s1;
	sub2=s2;
}
void test::put_marks(void)
{
	cout<<"Mark in Sub1="<<sub1<<endl;
	cout<<"Mark in Sub2="<<sub2<<endl;
}
class result:public test           //result class for calculating the total marks and display them
{
	float total;
   public:
	void display(void);
};


void result::display()
{
	total=sub1+sub2;
	put_number();
	put_marks();
	cout<<"Total="<<total<<endl;
}
void main()                    //main fun();
{
	result student1;
	clrscr();
	student1.get_number(111);
    student1.get_marks(75.0,59.5);
    student1.display();
    getch();

}
