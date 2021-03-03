// Array in STL
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5> data_array1={11,22,33,44,55};
    array <int,5> data_array2={1,2,3,4,5};
    data_array2.swap(data_array1);     // swap function
    for(int i=0;i<=4;i++)
        cout<<data_array1[i]<<" ";
    cout<<endl;
    for(int i=0;i<=4;i++)
        cout<<data_array2[i]<<" ";

    cout<<"\n"<<data_array1.size();   // size function
}
