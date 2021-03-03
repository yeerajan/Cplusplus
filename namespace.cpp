// namespace in C++
#include<iostream>
using namespace std;
namespace MySpace{
     int a;
     void f1();
     class A
     {
         public:
         void fun1();
     };
}void MySpace::f1(){ cout<<"In f1";}
void MySpace::A::fun1() { cout<<"\nIn fun1";}
using namespace MySpace;
int main()
{
    a=3;
    f1();
    A obj;
    obj.fun1();
}
