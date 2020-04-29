#include<iostream>
#include<conio.h>
using namespace std;

class convert_into_word
{
    long long int num,n,neel=0,khrb=0,arb=0,cr=0,lac=0,th=0,c=0,dc,d=0;
  public:
    void getAndConvert();
    void dec_century(int);
    void display_in_word();
    void display_dec(int);
    void display()
    {
        cout<<"crore="<<cr<<endl<<"lac="<<lac<<endl<<"Thousands="<<th<<endl<<"Hundred="<<c<<endl<<"Decimal="<<d<<endl;
    }
};


 void convert_into_word::dec_century(int n)
    {
        if(n<1000)
        {
            dc=n;
            if(dc>99)
            {
                d=dc%100;
                c=dc/100;
            }
            else
            {
                d=n;
            }
        }

    }



void convert_into_word::getAndConvert()
{

    cout<<"Enter Number=";
    cin>>num;

    n=num;

    if(n<0)
    {
        n=-(n);
    }

   if(n<1000)
   {
       dec_century(n);
   }

    if(n>999)
    {
        dc=n%1000;
        dec_century(dc);
        n=n/1000;

        if(n>99)
        {
            th=n%100;
            n=n/100;
        }
        else if (n<100)
        {
            th=n;
            n=n/100;
        }


//for lac
        if(n>99)
        {
            lac=n%100;
            n=n/100;
        }
        else if (n<100)
        {
            lac=n;
            n=n/100;
        }


//for crore
        if(n>99)
        {
            cr=n%100;
            n=n/100;
        }
        else if (n<100)
        {
            cr=n;
            n=n/100;
        }

     //for arab

         if(n>99)
        {
            arb=n%100;
            n=n/100;
        }
        else if (n<100)
        {
            arb=n;
            n=n/100;
        }


             //for kharab

         if(n>99)
        {
            khrb=n%100;
            n=n/100;
        }
        else if (n<100)
        {
            khrb=n;
            n=n/100;
        }




             //for neel

         if(n>99)
        {
            neel=n%100;
            n=n/100;
        }
        else if (n<100)
        {
            neel=n;
            n=n/100;
        }

    }
}


void convert_into_word::display_dec(int temp)
{
    int decimal;
    decimal=temp;
    switch(decimal)
    {

        case 1:
        cout<<"One ";
        break;

        case 2:
        cout<<"Two ";
        break;

        case 3:
        cout<<"Three ";
        break;

        case 4:
        cout<<"Four ";
        break;

        case 5:
        cout<<"Five ";
        break;

        case 6:
        cout<<"Six ";
        break;

        case 7:
        cout<<"Seven ";
        break;

        case 8:
        cout<<"Eight ";
        break;

        case 9:
        cout<<"Nine ";
        break;

        case 10:
        cout<<"Ten ";
        break;

        case 11:
        cout<<"Eleven ";
        break;

        case 12:
        cout<<"Twelve ";
        break;

        case 13:
        cout<<"Thirteen ";
        break;

        case 14:
        cout<<"Fourteen ";
        break;

        case 15:
        cout<<"Fifteen ";
        break;

        case 16:
        cout<<"Sixteen ";
        break;

        case 17:
        cout<<"Seventeen ";
        break;

        case 18:
        cout<<"Eighteen ";
        break;

        case 19:
        cout<<"Nineteen ";
        break;

        case 20:
        cout<<"Twenty ";
        break;

        case 21:
        cout<<"twenty one ";
        break;

        case 22:
        cout<<"twenty two ";
        break;

        case 23:
        cout<<"twenty three ";
        break;

        case 24:
        cout<<"Twenty four ";
        break;

        case 25:
        cout<<"Twenty five ";
        break;

        case 26:
        cout<<"Twenty six ";
        break;

        case 27:
        cout<<"Twenty Seven ";
        break;

        case 28:
        cout<<"Twenty eight ";
        break;

        case 29:
        cout<<"Twenty nine ";
        break;

        case 30:
        cout<<"Thirty ";
        break;

        case 31:
        cout<<"Thirty one ";
        break;

        case 32:
        cout<<"Thirty two ";
        break;

        case 33:
        cout<<"Thirty three ";
        break;

        case 34:
        cout<<"Thirty four ";
        break;

        case 35:
        cout<<"Thirty five ";
        break;

        case 36:
        cout<<"Thirty six ";
        break;

        case 37:
        cout<<"Thirty Seven ";
        break;

        case 38:
        cout<<"Thirty eight ";
        break;

        case 39:
        cout<<"Thirty nine ";
        break;

        case 40:
        cout<<"Forty ";
        break;



        case 41:
        cout<<"Forty one ";
        break;

        case 42:
        cout<<"Forty two ";
        break;

        case 43:
        cout<<"Forty three ";
        break;

        case 44:
        cout<<"Forty four ";
        break;

        case 45:
        cout<<"Forty five ";
        break;

        case 46:
        cout<<"Forty six ";
        break;

        case 47:
        cout<<"Forty Seven ";
        break;

        case 48:
        cout<<"Forty eight ";
        break;

        case 49:
        cout<<"Forty nine ";
        break;

        case 50:
        cout<<"Fifty ";
        break;





        case 51:
        cout<<"Fifty one ";
        break;

        case 52:
        cout<<"Fifty two ";
        break;

        case 53:
        cout<<"Fifty three ";
        break;

        case 54:
        cout<<"Fifty four ";
        break;

        case 55:
        cout<<"Fifty five ";
        break;

        case 56:
        cout<<"Fifty six ";
        break;

        case 57:
        cout<<"Fifty Seven ";
        break;

        case 58:
        cout<<"Fifty eight ";
        break;

        case 59:
        cout<<"Fifty nine ";
        break;

        case 60:
        cout<<"Sixty ";
        break;



        case 61:
        cout<<"Sixty one ";
        break;

        case 62:
        cout<<"Sixty two ";
        break;

        case 63:
        cout<<"Sixty three ";
        break;

        case 64:
        cout<<"Sixty four ";
        break;

        case 65:
        cout<<"Sixty five ";
        break;

        case 66:
        cout<<"Sixty six ";
        break;

        case 67:
        cout<<"Sixty Seven ";
        break;

        case 68:
        cout<<"Sixty eight ";
        break;

        case 69:
        cout<<"Sixty nine ";
        break;

        case 70:
        cout<<"Seventy ";
        break;

        //-------------------------



        case 71:
        cout<<"Seventy one ";
        break;

        case 72:
        cout<<"Seventy two ";
        break;

        case 73:
        cout<<"Seventy three ";
        break;

        case 74:
        cout<<"Seventy four ";
        break;

        case 75:
        cout<<"Seventy five ";
        break;

        case 76:
        cout<<"Seventy six ";
        break;

        case 77:
        cout<<"Seventy Seven ";
        break;

        case 78:
        cout<<"Seventy eight ";
        break;

        case 79:
        cout<<"Seventy nine ";
        break;

        case 80:
        cout<<"Eighty ";
        break;




        case 81:
        cout<<"Eighty one ";
        break;

        case 82:
        cout<<"Eighty two ";
        break;

        case 83:
        cout<<"Eighty three ";
        break;

        case 84:
        cout<<"Eighty four ";
        break;

        case 85:
        cout<<"Eighty five ";
        break;

        case 86:
        cout<<"Eighty six ";
        break;

        case 87:
        cout<<"Eighty Seven ";
        break;

        case 88:
        cout<<"Eighty eight ";
        break;

        case 89:
        cout<<"Eighty nine ";
        break;

        case 90:
        cout<<"Ninety ";
        break;




        case 91:
        cout<<"Ninety one ";
        break;

        case 92:
        cout<<"Ninety two ";
        break;

        case 93:
        cout<<"Ninety three ";
        break;

        case 94:
        cout<<"Ninety four ";
        break;

        case 95:
        cout<<"Ninety five ";
        break;

        case 96:
        cout<<"Ninety six ";
        break;

        case 97:
        cout<<"Ninety Seven ";
        break;

        case 98:
        cout<<"Ninety eight ";
        break;

        case 99:
        cout<<"Ninety nine ";
        break;
    }

}



    void convert_into_word::display_in_word()
    {

        if(num<0)
        {
            cout<<"Minus\n";
        }



        if(neel!=0)
        {
            display_dec(neel);
            cout<<"Neel ";
        }

        if(khrb!=0)
        {
            display_dec(khrb);
            cout<<"Kharab ";
        }

        if(arb!=0)
        {
            display_dec(arb);
            cout<<"Arab ";
        }
        if(cr!=0)
        {
            display_dec(cr);
            cout<<"Crore ";
        }

        if(lac!=0)
        {
            display_dec(lac);
            cout<<"Lac ";
        }


        if(th!=0)
        {
            display_dec(th);
            cout<<"Thousand ";
        }


        if(c!=0)
        {
            display_dec(c);
            cout<<"Hundred ";
        }

            display_dec(d);


            if(num==0)
            {
                cout<<" Zero";
            }


    }



int main()
{

    convert_into_word obj;
    obj.getAndConvert();
    cout<<"====================>>In Word [Indian number system]<<===================\n\n";


    //obj.display();


    obj.display_in_word();

     getch();
}
