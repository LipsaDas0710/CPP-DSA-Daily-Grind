#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int start=0;
        int end=n-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
    }
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'}; // Example input
    sol.reverseString(s);
    
    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    
    return 0;
}