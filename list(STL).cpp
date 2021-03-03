// list in STL in C++
#include<iostream>
#include<list>
using namespace std;
int main(){
list <int> l1{12,34,32,34,10};
list <string> l2{"Kota","Delhi","Lucknow","Patna"};

list <int> :: iterator p=l1.begin();
while(p!=l1.end()){
    cout<<*p<<" ";
    p++;
}
//l1.push_back(21); //l1.push_front(31);
//l1.pop_back(); // l1.pop_front();
// l1.sort();
//l1.reverse(); // l1.remove(34); // l1.clear();
l1.clear();
cout<<endl;
list <int> :: iterator q=l1.begin();
while(q!=l1.end()){
    cout<<*q<<" ";
    q++;
}


}
