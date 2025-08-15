#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string KthPermutation(int n, int k, vector<int> &nums){ 
     int fact=1;
     for(int i=1; i<n; i++){
        fact=fact*i;
     }
    k--;
    string ans="";
    while(true){
       ans= ans+to_string(nums[k/fact]);
       nums.erase(nums.begin()+k/fact);
       if(nums.size()==0) {
            break;
       }  
       k=k%fact;
       fact=fact/nums.size();
    }
    return ans;
}

int main(){
    int n=4; int k=17;
    vector<int> numbers={1, 2, 3, 4};

    string ans= KthPermutation(n, k, numbers);
    cout << "The " << k << "th permutation of the numbers is: " << ans << endl;

    
    return 0;
}