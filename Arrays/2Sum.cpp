#include <iostream>
#include <vector>   
#include <algorithm>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int left=0;
        int right=n-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==target){
                return true;
            }
            if(sum>target){
                right--;
            }
            if(sum<target){
                left++;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array
    int target = 6; // Example target sum
    if (sol.twoSum(arr, target)) {
        cout << "Two numbers found that sum to " << target << endl;
    } else {
        cout << "No two numbers found that sum to " << target << endl;
    }
    return 0;
}