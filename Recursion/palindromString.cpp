#include <iostream>
using namespace std;

bool palindrom(string s, int n,  int st){
    //mom madam 
    if(st>=n/2) return true;
    if (s[st]!=s[n-1-st]) return false;
    return palindrom(s,n,st+1);
}

int main(){
    string s;
    int n=s.length();
    cin>>s;
    cout<<palindrom(s,n,0);
    return 0;
}