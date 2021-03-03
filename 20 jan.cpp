// Function Template or Generic Function
#include<iostream>
using namespace std;
template <class X>
X Big(X a,X b){
    return a>b?a:b;
}
int main(){
    cout<<Big(3,7);
}
