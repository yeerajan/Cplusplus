// Function call by Passing objects and returning object
#include<iostream>
using namespace std;
class Comp{
private:
    int a,b;
public:
    void Set_Data(){
        cout<<"enter complex no. "<<endl;
        cin>>a>>b;
    }
    void Show_Data(){cout<<"a="<<a<<" b="<<b;}
    Comp Add(Comp S1,Comp S2){
        Comp S;
        S.a=a + S1.a + S2.a;
        S.b=b + S1.b + S2.b;
        return S;
    }
};
int main(){
    Comp C1,C2,C3;
    C1.Set_Data();
    C2.Set_Data();
    C3.Set_Data();
    Comp X;
    X = C2.Add(C1,C3);
    X.Show_Data();
}
