#include <iostream>
#include <string>   
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char ch:s){
            if(isalnum(ch)){
                st+=tolower(ch);
            }
        }
        string rev=st;
        reverse(rev.begin(),rev.end());
        if (st == rev){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Solution sol;
    string s = "Aaaasssaaa:a";
    if(sol.isPalindrome(s)){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
}