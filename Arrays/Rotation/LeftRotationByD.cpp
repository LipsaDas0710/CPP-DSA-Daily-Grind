/*Problem: Counter-clockwise Rotate an Array by One(left rotation)
Link:https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

Description:
Given an array arr, rotate the array by one position in counter-clockwise direction.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        d=d%arr.size();
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
    }
};
int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array
    int d = 2; // Number of positions to rotate
    sol.rotateArr(arr, d);
    
    cout << "Array after left rotation: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}