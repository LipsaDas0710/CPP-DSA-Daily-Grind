class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k = 1; k <= 60; k++) {
            long long S = (long long)num1 - (long long)k * num2;
            if (S <= 0) continue;          // must stay positive
            if (S < k) continue;           // need at least k terms
            int ones = __builtin_popcountll(S);
            if (ones <= k) return k;       // valid decomposition
        }
        return -1;
    }
};