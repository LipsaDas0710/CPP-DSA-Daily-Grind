#include <iostream>
using namespace std;


/*Given an integer num, return the number of digits in num that divide num.
An integer val divides nums if nums % val == 0.

Example 3:

Input: num = 1248
Output: 4
Explanation: 1248 is divisible by all of its digits, hence the answer is 4.*/

 
class Solution {
public:
    int countDigits(int num) {
        int dupenum=num;
        int count=0;
        while(num>0){
            int lastdigit=num%10;
            if(dupenum%lastdigit==0){
                count++;
            }
            num=num/10;
        }
        return count;
    }
};
int main() {
    Solution sol;
    int num = 1012; // Example number
    int result = sol.countDigits(num);
    printf("Count of digits that divide %d is: %d\n", num, result);
    return 0;
}