// pair in STL in C++
#include<iostream>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    void setStudent(string s,int a){
    name=s; age=a;
    }
    void showData(){
    cout<<"Name: "<<name<<" "<<"Age: "<<age;
    }
};
int main(){
pair <string,int>p1;
pair <string,string>p2;
pair <string,float>p3;

pair <int,student>p4;

p1=make_pair("Rajan Kumar",9);
p2=make_pair("India","New Delhi");
p3=make_pair("Data Structures and Algorithms",595.5f);

student s1;
s1.setStudent("Deepika Padukone",31);
p4=make_pair(12,s1);

cout<<"Pair 1\n"<<p1.first<<" "<<p1.second<<endl;
cout<<"Pair 2\n"<<p2.first<<" "<<p2.second<<endl;
cout<<"Pair 3\n"<<p3.first<<" "<<p3.second<<endl;

cout<<"Pair 4\n"<<p4.first<<endl;
student s2=p4.second;
s2.showData();
}
