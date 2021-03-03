// Constructor in C++
#include<iostream>
#include<conio.h>
using namespace std;
class Comp{
private:
    int a,b;
public:
    Comp(){ cout<<"Hello Constructor"<<endl;}
    ~Comp(){ cout<<"Destructor"<<endl;}
};
int main(){
    Comp C1,C2;
    Comp C3;
}
