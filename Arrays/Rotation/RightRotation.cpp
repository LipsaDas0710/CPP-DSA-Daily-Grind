#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int temp=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array
    sol.rotate(arr);
    
    cout << "Array after right rotation: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}