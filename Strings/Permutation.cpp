#include <iostream>
#include <string>
using namespace std;

/*Problem:567. Permutation in String*/

class Solution {
public:
    bool isTrue(int freq1[],int freq2[]){
        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
            
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            int windidx=0;
            int idx=i;
            int windfreq[26]={0};
            int windsize=s1.length();
            while(windidx<windsize  && idx<s2.length()){
                windfreq[s2[idx]-'a']++;
                windidx++;
                idx++;
            }
            if(isTrue(freq,windfreq)){
                return true;
            }
        }
        return false;
    }   
};

int main() {
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo"; // Example input
    if (sol.checkInclusion(s1, s2)) {
        cout << "s1 is a permutation of a substring in s2." << endl;
    } else {
        cout << "s1 is not a permutation of any substring in s2." << endl;
    }
    return 0;
}   