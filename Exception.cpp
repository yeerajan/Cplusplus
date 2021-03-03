// Exceptions in C++
#include<iostream>
using namespace std;
void fun() { throw 5;}
int main()
{
    int i=3;
    cout<<"welcome";
    try
    {
        if(i==3)
            fun();
        cout<<"\nIn Try";
    }
    catch(int e)
    {
        cout<<"\nException no: "<<e;
    }
    cout<<"\nLast Line";
}
