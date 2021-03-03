#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("MyFirstfile.txt");
    fout<<"Hello Rajan Bhai";
    fout.close();
}
