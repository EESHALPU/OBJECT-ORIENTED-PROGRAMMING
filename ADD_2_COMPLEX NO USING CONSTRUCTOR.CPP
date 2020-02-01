#include<iostream.h>
#include<conio.h>
class complex
{
	float x,y;
	public:
	complex(int a,int b)
	{
		x=a;
		y=b;
	}
	complex(complex,complex);
	void disp();
};
	 complex::complex(complex c1,complex c2)
	{
		x=c1.x+c2.x;
		y=c1.y+c2.y;
	}
	void complex::disp()
	{    cout<<"--------------------"<<endl;
		cout<<"x="<<x<<"Y="<<y;
	}

  void main()
  {
	 float n1,n2;
	 clrscr();
	 cout<<"Enter the value of first complex no="<<endl;
	 cout<<"X=";
	 cin>>n1;

	 cout<<"Y=";
	 cin>>n2;

	 complex obj1(n1,n2);
	 cout<<"Enter the value of 2nd complex no="<<endl;
	 cout<<"X=";
	 cin>>n1;
	 cout<<"Y=";
	 cin>>n2;

	 complex obj2(n1,n2);

	 complex obj3(obj1,obj2);
	 obj3.disp();
	 getch();
}


