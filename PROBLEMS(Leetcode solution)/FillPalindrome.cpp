#include<iostream>
#include <string>
using namespace std;

string FilledPalindrome(string &s){
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        if(s[start]=='?' && s[end]=='?'){
            s[start]=s[end]='a';
        }
        if(s[start]='?'){
            s[start]=s[end];
        }
        if(s[end]=='?'){
            s[end]=s[start];
        }
          if (start == end && s[start] == '?') {
            s[start] = 'a';
        }
        start++;
        end--;
    }
    return s;
}



int main(){
    string s="a?b?c?d?c?b?a"; 
    cout<< FilledPalindrome(s)<<endl;
    return 0;
}