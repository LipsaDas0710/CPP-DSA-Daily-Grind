// Problem: Second Largest (geeksforgeeks)
// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1

// Description:
// Given an array of integers, find the second largest element in the array.


#include <iostream>
using namespace std;

int getSecondLargest(int *arr, int n) {
    // code here
    int largest=arr[0];
    int slargest=-1;
    for (int i=0; i<n;i++){
        if (arr[i]>largest && arr[i]!=largest){
            slargest=largest;
            largest=arr[i];
        }
        if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest element in the array is: " << getSecondLargest(arr, n) << endl;
    return 0;
}

/*Brute Force Approach:
- Sort the array in descending order and pick the second element.
Time Complexity: O(n log n)
Space Complexity: O(1) if sorting in-place, O(n) if using extra copy.

Optimal Approach:
- Traverse the array once to find the largest and second largest elements.
Time Complexity: O(n)
Space Complexity: O(1)
*/