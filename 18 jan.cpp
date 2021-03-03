// Operator Overloading in C++
#include<iostream>
using namespace std;
class Comp{
private:
    int a,b;
public:
    void Set_Data(){
        cout<<"Enter Complex no. "<<endl;
        cin>>a>>b;
    }
    void Show_Data(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    Comp operator-(){
        Comp temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};
int main(){
    Comp C1;
    C1.Set_Data();
    C1.Show_Data();
    Comp C;
    C=-C1;
    C.Show_Data();
}
