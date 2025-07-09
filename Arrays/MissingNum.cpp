/*Problem: Find the Missing Number in an Array
Description:
Given an array of n-1 integers in the range of 1 to n, find the missing number in the array. The array contains distinct integers.*/

#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse
using namespace std;

/*Brute Force Solution
Description:
Take 2 for loops on to count the num and one to iterate the array.*/
class Solution1 {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        for(int i=0; i<=n;i++){
            int flag=0;
            for(int j=0; j<n; j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }
        }
        return -1;
    }
};


/*Optimal solution(XOR Approach)
Time complexity:o(n)
Space complexity:o(1)*/
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int XOR1=0;
        int XOR2=0;
        
        for(int i=0;i<n;i++){
            XOR2=XOR2^arr[i];
            XOR1=XOR1^(i+1);
        }
        XOR1=XOR1^(n+1);
        return XOR1^XOR2;
    }
};

/*Optimal Solution (Sum method)
Description: take the sum of natual no till taht number then sub tact the sum of teh array.
*/
class Solution2 {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sumNums=0;
        int sum=n*(n+1)/2;
        for (int i=0; i<n; i++){
            sumNums+=nums[i];
        }
        int Missing_number=sum-sumNums;
        return Missing_number;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4, 5}; // Example array with a missing number
    int missing = sol.missingNum(arr);
    cout << "The missing number is: " << missing << endl;
    return 0;
}