#include<iostream>
using namespace std;
int square(int&);
int main(){
    int x;
    cin>>x;
    int s=square(x);
    cout<<"square of "<<x<<" is "<<s;
}
 int square(int&y){
    return y*y;
 }
