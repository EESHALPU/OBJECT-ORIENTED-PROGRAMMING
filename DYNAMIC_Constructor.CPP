#include<iostream.h>
#include<conio.h>
#include<string.h>
class ABC
{
    int n;
    char *p;
    public:
    ABC()
    {
        n=0;
        p=new char[n+1];
        strcpy(p," ");
    }

    ABC (char *s)
    {
        n=strlen(s);
        p=new char[n+1];
	   strcpy(p,s);
    }

    void disp()
    {
	   cout<<"Name:"<<p<<endl																																																																																										;
    }
};

void main(void)
{
    ABC s1,s2,s3("RAM"),s4("PROM"),s5("EEPROM");
    clrscr();
    s1.disp();
    s2.disp();
    s3.disp();
    s4.disp();
    s5.disp();
    getch();

}

