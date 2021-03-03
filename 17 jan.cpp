// Class and objects
#include<iostream>
using namespace std;
class Comp{
private:
    int a,b;
public:
    void Set_Data(){
        cout<<"Enter a and b"<<endl;
        cin>>a>>b;
    }
    void Show_Data(){cout<<"a="<<a<<" "<<"b="<<b;}
};
int main(){
    Comp C;
    C.Set_Data();
    C.Show_Data();
}
