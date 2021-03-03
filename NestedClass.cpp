// Nested Class in C++
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    int rollno;
    char name[20];
    class Address
    {
    private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
    public:
        void setAddress(int h,char *s,char *c,char *st,char *p)
        {
            houseno=h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,p);
        }
        void showAddress()
        {
            cout<<houseno;
            cout<<"\n"<<street<<" "<<city<<" "<<state<<endl;
            cout<<pincode;
        }
    };
    Address add;
public:
    void setRollno(int r) { rollno=r;}
    void showRollno() { cout<<rollno<<endl;}
    void setName(char *n) { strcpy(name,n);}
    void showName() { cout<<name<<endl;}
    void setAddress(int h,char *s,char *c,char *st,char *p)
    {
        add.setAddress(h,s,c,st,p);
    }
    void showAddress()
    {
        add.showAddress();
    }
};
int main()
{
    Student s1;
    s1.setRollno(9);
    s1.setName((char*)"Rajan Kumar");
    s1.setAddress(100,(char*)"Kabir Chak",(char*)"Darbhanga",(char*)"Bihar",(char*)"846009");
    s1.showRollno();
    s1.showName();
    s1.showAddress();
}
