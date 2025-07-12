/*Problem: CCount Digits in a Number
Link: https://www.geeksforgeeks.org/problems/count-digits-1606889545/1

Description:
Given a natural number n. You have to find the number of digits in it and return it.*/


#include <stdio.h>
using namespace std;
class Solution {
  public:
    int countDigits(int n) {
        // code here
        int count=0;
        while(n>0){
            int lastdigit=n%10;
            count ++;
            n=n/10;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n = 12345; // Example number
    int result = sol.countDigits(n);
    printf("Number of digits in %d is: %d\n", n, result);
    return 0;
}


