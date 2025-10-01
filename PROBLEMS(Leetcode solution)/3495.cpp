class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        auto prefix = [&](long long n) {
            if (n <= 0) return 0LL;
            long long total = 0;
            long long power = 1; // 4^0
            int k = 0;
            while (power <= n) {
                long long next_power = power * 4;
                long long high = min(n, next_power - 1);
                long long count = high - power + 1;
                total += count * (k + 1LL);
                power = next_power;
                k++;
            }
            return total;
        };

        long long result = 0;
        for (auto &q : queries) {
            long long l = q[0], r = q[1];
            long long steps_sum = prefix(r) - prefix(l - 1);
            result += (steps_sum + 1) / 2; // ceil(steps_sum/2)
        }
        return result;
    }
};