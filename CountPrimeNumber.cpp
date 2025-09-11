class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<char> num (n,true);
        num[0]=num[1]=false;

        for(int i=2;i*i<n;i++){
            if(num[i]){
                for(int j=i*i;j<n;j+=i){
                    num[j]=false;
                }
            }
        }
        return count(num.begin(),num.end(), true);

    }
};
//take the bool vector till n the make false and true to the factor of the natural number from 2 to n checking for i*i (base case thingy!! 36=6*6)
