#include <iostream>
using namespace std;
#include <string>
#include <vector>

bool isPalindrome(string s,int start, int end){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
}

void PartitionPalindrome(int ind, string s, vector<vector<string>> &ans, vector<string> &ds){
    if(ind==s.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=ind; i<s.size();i++){
        if(isPalindrome(s, ind,i)){
            ds.push_back(s.substr(ind, i-ind+1));
            PartitionPalindrome(i+1, s,ans, ds);
            ds.pop_back();
        }
    }
}
vector<vector<string>> partition (string s){
    vector<vector<string>> ans;
    vector<string>ds;
    PartitionPalindrome(0,s,ans,ds);
    return ans;
}



int main(){
    string s="aabbbcc";
    vector<vector<string>> result=partition(s);

    for(auto it: result){
        for(auto str:it){
            cout<< str << " ";
        }
        cout << endl;
    }

    return 0;
}
