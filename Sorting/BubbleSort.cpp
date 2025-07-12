#include <iostream>
#include <vector>
using namespace std;
/*Desc: check the consicutive (adj) elements and takes the 
largest elemnet to the last the checks again. hence j loops goes form 0 to n-1-i*/

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size()-i-1;j++){
                if (arr[j]>arr[j+1]){
                    // swap(arr[j],arr[j+1]);
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
};

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    Solution sol;
    sol.bubbleSort(arr);
    
    cout << "Sorted array: ";
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}