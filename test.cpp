#include<iostream>
using namespace std;
#include<vector>
int reverse(int n , int rev){
    if(n<=0) return rev;
    reverse(n/10, (rev*10)+(n%10));
}

int main(){
    int n =123354;
    cout<<reverse(n,0);
    return 0;
}