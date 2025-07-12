/*Problem: Check if the given arry is sorted or not
Link: https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

Description:
Given an array of integers, Check if it is sorted or not.*/

#include <iostream>
using namespace std;

bool arraySortedOrNot(int arr[], int n) {
    // Code Here
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
        }
        else{
            return false;
        }
        
    }
    return true;
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}