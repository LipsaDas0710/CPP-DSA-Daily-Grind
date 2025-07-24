#include <iostream>
using namespace std;

int sum=0;

// int Tsum(int n){
//     if (n<=0){
//         return sum;
//     }
//     sum+=n;
//     Tsum(n-1);
// }

int Tsum(int n){
    if (n<=0){
        return 0;
    }else{
        return n + Tsum(n-1); 
    }
}

int main(){
    int n;
    cin>>n;
    cout<< Tsum(n);
    //cout << "Sum using global variable: " << sum << endl;
    return 0;
}