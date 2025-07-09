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

/*Brute Force Approach:
- SIn set when we insert elements, it automatically removes duplicates.
- Use a set to store unique elements and then copy them back to the array.
Time Complexity: O(n log n) + O(n)
Space Complexity: O(n) for the set.

Optimal Approach:
- Use two pointer method(i , j) to check for dupes and add the != elememt at the next place (i+1).
Time Complexity: O(n)
Space Complexity: O(1)
*/