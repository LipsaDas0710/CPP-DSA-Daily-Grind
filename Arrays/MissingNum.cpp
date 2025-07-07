#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse
using namespace std;

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

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4, 5}; // Example array with a missing number
    int missing = sol.missingNum(arr);
    cout << "The missing number is: " << missing << endl;
    return 0;
}