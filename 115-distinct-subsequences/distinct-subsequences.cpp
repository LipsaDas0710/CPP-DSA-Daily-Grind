class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.length();
        int n = t.length();

        if (m < n) return 0;

        // dp[j] stores the number of subsequences of s matching t[0...j-1]
        vector<unsigned long long> dp(n + 1, 0);
        dp[0] = 1; // Empty target can always be formed in 1 way

        for (int i = 1; i <= m; ++i) {
            // Traverse backward to use dp values from the previous step without overwriting
            for (int j = n; j >= 1; --j) {
                if (s[i - 1] == t[j - 1]) {
                    dp[j] += dp[j - 1];
                }
            }
        }

        return static_cast<int>(dp[n]);
    }
};