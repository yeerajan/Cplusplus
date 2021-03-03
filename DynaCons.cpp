// Dynamic Constructor in C++
#include<iostream>
using namespace std;
class A
{
private:
    int a,b;
    int *p;
public:
    A(){ a=0; b=0; p=new int; *p=0;}
    A(int x,int y,int z)
    {
        a=x; b=y; p=new int; *p=z;
    }
    void showData(){ cout<<"a="<<a<<" b="<<b<<" *p="<<*p;}
    ~A() { delete p;}
};
int main()
{
    A o1,o2,o3(2,4,5);
    //o1.showData();
    o3.showData();
}
