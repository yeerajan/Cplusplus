#include <iostream>
using namespace std;
void pairing(int [],int,int);
int main()
{
int N; cin>>N;
int arr[N];
for(int i=0;i<N;i++)
cin>>arr[i];
int X; cin>>X;
pairing(arr,N,X);
}

void pairing(int arr[],int N,int X){
    int i;
    for(i=0;i<N-1;i++){
    int k=i+1;
    int temp=X-arr[i];
    
    while(k!=N){
    if(temp==arr[k])
    {cout<<arr[i]<<" "<<arr[k]; return;}
    else
    k++;
    }
    
    }
    if(i==N-1) cout<<-1; return;
}