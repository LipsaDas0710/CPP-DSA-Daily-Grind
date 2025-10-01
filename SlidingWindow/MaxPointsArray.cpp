#include <iostream>
using namespace std;
#include <vector>

int MaxPointsArray(int arr[],int n, int k){
    
    int lsum=0;
    int rsum=0;
    for(int i=0; i<k; i++){
        lsum+=arr[i];
    }
    int maxsum=lsum;
    int rightidx=n-1;
    for(int i=k;i>=0;i--){
        lsum=lsum-arr[i];
        rsum+=arr[rightidx];
        rightidx--;
        int cursum=lsum+rsum;
        maxsum= max(maxsum, cursum);
    }
    return maxsum;
}

int main(){
    int arr[]   = {1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int q=MaxPointsArray(arr, n, 4);    
    cout  << q << endl;
return 0;
}