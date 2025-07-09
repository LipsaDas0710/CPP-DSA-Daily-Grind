/*Problem: Move Zeroes to End of Array

Description:
Given an array of integers,Move the zeroes to the end*/


#include <bits/stdc++.h>    
#include <vector>
using namespace std;

/*Optimized solution
Description:
Use two pointers to traverse the array. One pointer (j) keeps track of the position to
Time complexity: o(n)
Space complexity:o(1)*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if (j == -1) return;
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }

        }
    
        
    }
};


/*Brute Force Solution
Decription:
Create a temporary array to store non-zero elements, then copy them back to the original array and
Time Complexity: O(n^3)
Space Complexity: O(n)
*/
class Solution1 {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int> temp;
        int n=arr.size();
        for(int i=0; i<n;i++){
            if(arr[i]!=0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
            arr[i]=temp[i];
        }
        for(int i=temp.size();i<n;i++){
            arr[i]=0;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12}; // Example array
    sol.moveZeroes(nums);
    
    cout << "Array after moving zeroes to the end: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}