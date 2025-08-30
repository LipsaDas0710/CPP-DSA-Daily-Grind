#include<iostream>
using namespace std;

void Reverse(int arr[],int l, int r){
    if(l<=r) return;
    swap(arr[l],arr[r]);
    return Reverse(arr,l+1,r-1);
}

int main(){
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    Reverse(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}