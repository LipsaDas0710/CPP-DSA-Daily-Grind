
#include <iostream>
#include <vector>   
#include <algorithm> // for std::reverse
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int place=(k)%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+place);
        reverse(nums.begin()+place,nums.end());
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3; // Number of positions to rotate
    sol.rotate(nums, k);
    
    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}