#include <bits/stdc++.h>
using namespace std;

/*reverse the complete sentense then reverse the individual words.*/
class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0; i<s.length();i++){
            string words="";
            while(i<s.length() && s[i]!=' '){
                words += s[i];
                i++;
            }
            reverse(words.begin(),words.end());
            if(words.length()>0){
                ans += " " + words;
            }
        }
        return ans.substr(1);
    }
};

int main() {
    Solution sol;
    string s = "the sky is blue"; // Example input
    string result = sol.reverseWords(s);
    
    cout << "Reversed words: " << result << endl; // Output: "blue is sky the"
    
    return 0;
}   