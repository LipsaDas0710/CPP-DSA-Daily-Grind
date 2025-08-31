#include<iostream>
using namespace std;
// int MissingNum(int arr[],int n){
//     int xor1=0;
//     int xor2=0;

//     for(int i=0;i<n;i++){
//         xor1=xor1^arr[i];
//         xor2=xor2^(i+1);
//     }
//     xor1=xor1^xor2;
//     return xor1;
// }

int MissingNum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum=sum+arr[i];
    }
    int totalSum=((n+1)*(n+2)/2)*10;

    int diff= totalSum-sum;
    return diff;
}

int main(){
    int arr[]={10,30,40,50};
    cout<< MissingNum(arr,4);
    return 0;
}