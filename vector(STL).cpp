// Vector in STL
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> v1;
for(int i=0;i<10;i++)
    v1.push_back((i+1)*10);
for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
vector <int> :: iterator p=v1.begin();   //iterator
v1.insert(p+5,55);
cout<<endl;
for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
//cout<<endl<<v1.front()<<" "<<v1.back();
}
