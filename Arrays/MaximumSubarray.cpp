/*Problem: Maximum Subarray (Kadane's Algorithm)

Desc:You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

Note : A subarray is a continuous part of an array.

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11*/

#include <iostream>
#include <vector> 
#include<bits/stdc++.h>  
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i<n;i++){
            sum+=arr[i];
            maxi= max(maxi,sum);
            if(sum<0){
                sum=0;
            }
            
        }
        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3}; // Example input
    int result = sol.maxSubarraySum(arr);
    cout << "Maximum subarray sum is: " << result << endl;
    return 0;
}