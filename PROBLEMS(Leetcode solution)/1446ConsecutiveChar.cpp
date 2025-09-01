// The power of the string is the maximum length of a non-empty substring that contains only one unique character.
// Given a string s, return the power of s.
// Example 1:

// Input: s = "leetcode"
// Output: 2
// Explanation: The substring "ee" is of length 2 with the character 'e' only.
// Example 2:

// Input: s = "abbcccddddeeeeedcba"
// Output: 5
// Explanation: The substring "eeeee" is of length 5 with the character 'e' only.
 

// Constraints:

// 1 <= s.length <= 500
// s consists of only lowercase English letters.


#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int cnt=1;
        int ans=1;
        int j=0;
        for(int i=1; i<s.length();i++){
            if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                cnt=1;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
}; 


/*whatever the string is it will always have 1 consecutive char. So use ans to comapir and return that 1 as answer!!*/