#include<iostream>
using namespace std;
#include<math.h>

int Armstrong(int n, int sum){
    if(n==0) return sum;
    int digit = n%10;
    sum +=pow(digit,3);
    return Armstrong(n/10,sum);
}

int main(){
    int num=371;
    int ArmstrongSum=Armstrong(num,0);
    if(ArmstrongSum==num) cout << "Armstrong Number"<<endl;
    else cout << "Not an Armstrong Number"<<endl;
    return 0;
}