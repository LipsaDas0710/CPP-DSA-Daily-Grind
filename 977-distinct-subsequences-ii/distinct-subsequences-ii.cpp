class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        vector<long long> dp(26, 0);

        for (char ch : s) {
            int idx = ch - 'a';
            long long sum_all = 0;
            for (int i = 0; i < 26; ++i) {
                sum_all = (sum_all + dp[i]) % MOD;
            }
            dp[idx] = (sum_all + 1) % MOD;
        }

        long long total = 0;
        for (int i = 0; i < 26; ++i) {
            total = (total + dp[i]) % MOD;
        }

        return total;
    }
};