#include <iostream>
using namespace std;
int Sum(int[],int);
int SingleRotation(int[],int);
int main() {
	int A[]={0,1,6,7,2,3};
	int n=sizeof(A)/sizeof(A[0]);
	int B[6];
	B[0]=Sum(A,n);
	for(int i=1;i<n;i++){
	    B[i]=SingleRotation(A,n);
	}
	for(int k=0;k<n-1;k++){
	    if(B[k]>=B[k+1]){
	        int t;
	        t=B[k];
	        B[k]=B[k+1];
	        B[k+1]=t;
	    }
	}
	cout<<B[n-1];

}
int Sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+i*arr[i];
    }
    return sum;
}
int SingleRotation(int ar[],int n){
    int temp;
    temp=ar[0];
    for(int i=0;i<n-1;i++){
        ar[i]=ar[i+1];
    }
    ar[n-1]=temp;
    return Sum(ar,n);
}
