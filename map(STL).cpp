// map in STL in C++
#include<iostream>
#include<map>
using namespace std;
int main(){
map <string,int> m1{ {"rajan",100},{"ramesh",95},{"Raja",42},{"Dilip",105} };
m1.insert(pair <string,int> ("Nikita",110));
map <string,int> :: iterator p=m1.begin();
while(p!=m1.end()){
    cout << p->first << " " ;
    p++;
}

}
