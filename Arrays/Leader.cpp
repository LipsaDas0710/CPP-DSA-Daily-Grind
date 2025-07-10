/*Problem:You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

Examples:

Input: arr = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> ans;
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
            }
            maxi=max(maxi,arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {16, 17, 4, 3, 5, 2}; // Example input
    vector<int> result = sol.leaders(arr);
    
    cout << "Leaders in the array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}           

