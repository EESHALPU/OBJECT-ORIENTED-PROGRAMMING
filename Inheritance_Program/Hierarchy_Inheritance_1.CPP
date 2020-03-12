#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class gen_info
{
	char city[20],area[20],zip[6],street_no[10],ph[10];
	public:
	void get_gen_info()
	{
		cout<<"Enter the City Name=";
		gets(city);
		cout<<"Enter the Area=";
		gets(area);
		cout<<"Enter the Zip code=";
		gets(zip);
	    //	cout<<"Enter the Street No=";
	  //	gets(street_no);
		cout<<"Enter the Phone no=";
		gets(ph);
	}
	void disp_gen_info()
	{
	  cout<<city<<"\t"<<zip<<"\t"<<ph<<endl;
	  cout<<"____________________________________________________________"<<endl;
	}


};

class stu_info:public gen_info
{
		int roll,marks10,marks12;
		char name[20];
		public:
		void get_stu_info()
		{

			cout<<"Enter the roll no=";
			cin>>roll;
			cout<<"Enter the Name of Student=";
			gets(name);
			get_gen_info();
			cout<<"Enter the 10th Marks=";
			cin>>marks10;
			cout<<"Enter the 12th marks=";
			cin>>marks12;
		}
		 void disp_stu_info()
		 {   cout<<"____________________________________________________________"<<endl;
			cout<<"Roll Name\t10Th\t12th\t City\t\tZip_Code\tPH_No"<<endl;
			cout<<roll<<ends<<name<<"\t"<<marks10 <<"\t"<<marks12<<"\t";
			disp_gen_info();
		 }
};

class emp_info:public gen_info
  {
		unsigned int bsal,da,ta,hra,gross;
		char emp_name[20];
		public:
		void get_emp_info()
		{

			cout<<"Enter the Employee name=";
			gets(emp_name);
			get_gen_info();
			cout<<"Enter the Basic Salary of Employee=";
			cin>>bsal;

			if(bsal>=5000 &&bsal<20000)
			{
				da=(bsal*10)/100;
				ta=(bsal*5)/100;
				hra=(bsal*8)/100;
			}
			else if(bsal>=20000 && bsal<50000)
			{
				da=(bsal*10)/100;
				ta=(bsal*12)/100;
				hra=(bsal*15)/100;
			}
			else
			{
				da=(bsal*10)/100;
				ta=(bsal*15)/100;
				hra=(bsal*18)/100;
			}
		 gross=bsal+da+ta+hra;
	}

   void disp_emp_info()
   {

	cout<<"Name\t\tBasic_sal\tGross_sal\t City\tZip_Code PH_No"<<endl;
	cout<<emp_name<<"\t"<<bsal<<"\t"<<gross<<"\t";
	disp_gen_info();
   }
};

void main()
	{
		stu_info stu; //obj of class stu_info:gen_info
		emp_info emp; //obj of class emp_info:emp_info
		int ch;
	 clrscr();
		while(1)
		{
			cout<<"1.Insert_Student Record"<<endl;
			cout<<"2.Insert_employee record"<<endl;
			cout<<"3.Display_studet_record"<<endl;
			cout<<"4.Display_employee record"<<endl;
			cout<<"5.Exit"<<endl;
			cout<<"Choose Correct Option=";
			cin>>ch;
			switch(ch)
			{
				case 1:   stu.get_stu_info();
				break;
				case 2:   emp.get_emp_info();
				break;
				case 3:  stu.disp_stu_info();
				break;
				case 4:  emp.disp_emp_info();
				break;
				case 5:   exit(0);
				break;
			}
		}

}