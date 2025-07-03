/*Problem: Find Largest Element in Array
Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

Description:
Given an array of integers, find the largest element in the array.*/


#include <iostream>
using namespace std;
int largest(int arr[], int n) {
    // Code Here
        
        int largestNum = arr[0] ;
        for (int i =0; i<n; i++) {
            if(arr[i] > largestNum){
                largestNum = arr[i];
            }
            
        }
        return largestNum;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element in the array is: " << largest(arr, n) << endl;
    return 0;
}


/*Brute Force Approach:
- Sort the array and pick the last element (if sorted in ascending order).
Time Complexity: O(n log n)
Space Complexity: O(1) if sorting in-place, O(n) if using extra copy.

Optimal Approach:
- Traverse the array once and keep track of the maximum element.
Time Complexity: O(n)
Space Complexity: O(1)
*/