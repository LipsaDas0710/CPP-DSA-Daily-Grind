#include <iostream>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        int sumdivisor=1;
        for(int i=2; i*i<=num;++i){
            if(num%i == 0){
                sumdivisor+=i;
                if(i!=num/i){
                    sumdivisor+= num/i ;
                }
            }
        }
        
        return sumdivisor == num;
    }
};

int main(){
    Solution sol;
    int num = 28; // Example number
    bool result = sol.checkPerfectNumber(num);
    if(result){
        cout<< num << " is a perfect number.\n";
    } else {
        cout<< num << " is not a perfect number.\n";
    }
    return 0;
}