/*problem: sort the with 0,1,2*/
/*Optimal soulution:
Time complexity:o(n)
Space complexity:o(1)*/

#include <iostream>
#include <vector>
#include <algorithm> // for std::swap   
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
                /*i know whne swapped with low (low will always have 1) so dont need to check!!*/
            }
            else if(arr[mid]==1){
                mid++;
            }
            else {
                swap(arr[high],arr[mid]);
                high--;
                /*i dont know whats in mid!! so i have to check it again!*/
                
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 0}; // Example array
    sol.sort012(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}