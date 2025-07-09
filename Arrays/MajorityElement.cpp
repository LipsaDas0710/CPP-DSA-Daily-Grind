/*Problem: Majority element
Desc:Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/

#include<iostream>
#include <vector>
using namespace std;


/*Optimal Solution
Time complexity:o(n)
Space complexity:o(1)*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        int ele;
        for(int i=0;i<n;i++){
            if(count==0){
                ele=nums[i];
                count=1;
            }
            else if(ele==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int elecount=0;
        for(int i=0;i<n;i++){
            if(ele==nums[i]){
                elecount++;
            }
        }
        if(elecount = n/2){
            return ele;
        }
        return ele;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3}; // Example input
    int result = sol.majorityElement(nums);
    cout << "Majority element is: " << result << endl;
    return 0;
}