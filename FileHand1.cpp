#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("MyFirstFile.dat");
    char ch;
    ch=fin.get();
    while(!fin.eof()){
    cout<<ch;
    ch=fin.get();
    }
    fin.close();
}
