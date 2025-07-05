#include <iostream>
using namespace std;    

class Solution {
  public:
    int reverseDigits(int n) {
        int Rnum=0;
        // Code here
        while(n>0){
           int lastdigit=n%10;
           Rnum=Rnum*10 + lastdigit;
           n=n/10;
        }
        return Rnum;
    }
};

int main(){
    Solution sol;
    int n = 12345; // Example number
    int result = sol.reverseDigits(n);
    cout<< "Reversed number is: " << result << endl;
    return 0;
}