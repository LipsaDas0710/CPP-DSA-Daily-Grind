#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int smallIdx=i;
            for(int j=i+1;j<n;j++){
                if(arr[smallIdx]>arr[j]){
                    smallIdx=j;
                }
            }
            swap(arr[i],arr[smallIdx]);
        }
    }
};

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    Solution sol;
    sol.selectionSort(arr);
    
    cout << "Sorted array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}   