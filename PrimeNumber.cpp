#include <iostream>
using namespace std;

class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int count=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                count++;
                if(i!= n/i){
                    count++;
                }
            }
        }
        return count==2;
    }
};
int main() {
    Solution sol;
    int n = 29; // Example number
    if (sol.isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}

/*Brute Force Method - O(n) Time

In this approach, we can check whether the number is prime or not by iterating in 
the range from 1 to n. If there are more than 2 divisor (including 1 and n) then the given number n 
is not prime, else n is prime. This method is known as trial division method.

Optimized Method - O(√n) Time

In this approach, we don't check all divisors of the given number, we only check divisors up 
to the square root of the number.*/