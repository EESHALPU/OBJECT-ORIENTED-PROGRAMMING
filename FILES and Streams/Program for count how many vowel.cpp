#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
   char data[100];
   ofstream outfile;
   outfile.open("myfile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter the string: ";
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();
    ifstream fin;
    fin.open("myfile.dat");
    char ch;
    int count=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        count++;
    }
    cout<<"Number of Vowel in File="<<count;
    fin.close();
    return 0;
}
