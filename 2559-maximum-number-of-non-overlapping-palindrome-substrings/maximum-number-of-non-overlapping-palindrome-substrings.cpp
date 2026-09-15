class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        int count = 0;
        int last_end = -1;

        // Check each possible center of a palindrome
        for (int i = 0; i < 2 * n - 1; ++i) {
            int l = i / 2;
            int r = l + (i % 2);

            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 >= k) {
                    if (l > last_end) {
                        count++;
                        last_end = r;
                        break; // Greedily take the shortest valid palindrome around this center
                    }
                }
                l--;
                r++;
            }
        }

        return count;
    }
};