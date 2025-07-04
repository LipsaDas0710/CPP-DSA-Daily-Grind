/*Problem: Remove Duplicate Elements from Sorted Array
Link: https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

Description:
Given a sorted array arr. Return the size of the modified array which contains only distinct elements.*/

#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int size= arr.size();
        int i=0;
        for (int j=1;j<size;j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
};
int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
    Solution sol;
    int newSize = sol.removeDuplicates(arr);
    // Output the modified array and its new size
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNew size: " << newSize << endl;
    return 0;
}
