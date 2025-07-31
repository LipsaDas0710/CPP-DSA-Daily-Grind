#include <iostream>
using namespace std;

int reverse(int rev, int n){
   if(n==0) return rev;
   
   return reverse(rev*10+n%10,n/10);
  
}


bool Palindrome(int org){
  int rev=reverse(0,org);
  if(org == rev) return true;
  else return false;
  
}

int main(){
  cout<<Palindrome(232);

  return 0;
}