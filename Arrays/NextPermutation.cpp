/*Problem: Next Permutation
Decs:
Example 1:
Input: nums = [1,2,3]
Output: [1,3,2]

Example 2:
Input: nums = [3,2,1]
Output: [1,2,3]*/

#include <iostream>
#include <vector>   
#include <algorithm> // for std::reverse
using namespace std;

/*Optimized solution
Description:
1. Traverse the array from right to left(N-2 TO 0) to find the first pair of elements where the left 
element is smaller than the right element(BREAKING POINT!!!)(THEN PUT IT IN INDEX TO SAVE IT FOR LATER!!). 
This identifies the pivot point.
2. If no such pair is found, reverse the entire array to get the smallest permutation.  
3. If a pivot is found, traverse the array from right to left(N-1 TO INDEX) again to find the first
 element that is larger than the pivot. Swap these two elements.
4. Finally, reverse the subarray to the right of the pivot to get the next permutation
Time Space:o(n)+o(n)+o(n)~=o(n)
Space complexity :o(1)*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            return reverse(nums.begin(),nums.end());
        }
        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3}; // Example input
    sol.nextPermutation(nums);
    
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}