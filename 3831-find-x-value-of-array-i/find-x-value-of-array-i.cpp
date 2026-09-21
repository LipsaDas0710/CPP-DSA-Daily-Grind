class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        vector<long long> dp(k, 0);

        for (int x : nums) {
            vector<long long> next_dp(k, 0);
            int v = x % k;

            // Subarray consisting only of the current element
            next_dp[v]++;

            // Extend subarrays ending at the previous position
            for (int r = 0; r < k; ++r) {
                if (dp[r] > 0) {
                    next_dp[(r * v) % k] += dp[r];
                }
            }

            // Add counts of subarrays ending at the current index to the answer
            for (int r = 0; r < k; ++r) {
                ans[r] += next_dp[r];
            }

            dp = std::move(next_dp);
        }

        return ans;
    }
};