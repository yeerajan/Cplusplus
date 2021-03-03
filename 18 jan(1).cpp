// Friend Function in C++
#include<iostream>
using namespace std;
class B;
class A{
private:
    int a;
public:
    void SetData(){ cout<<"Enter a No. "<<endl; cin>>a;}
    friend void fun(A,B);
};
class B{
private:
    int b;
public:
    void SetData(){ cout<<"Enter a No. "<<endl; cin>>b;}
    friend void fun(A,B);
};
void fun(A o1,B b1){
    cout<<"sum is "<<o1.a+b1.b;
}
int main(){
    A obj1;
    B obj2;
    obj1.SetData();
    obj2.SetData();
    fun(obj1,obj2);
}
