#include <bits/stdc++.h>
using namespace std;

string kthPermutation(int n, int k, vector<int> &nums) {
    if (n == 0) return "";

    // Factorial of n-1 to know block size
    int fact = 1;
    for (int i = 1; i <= n - 1; i++) fact *= i;

    // Determine index of the number to place
    int index = (k - 1) / fact;
    int newK = k - index * fact;

    // Pick the element
    string result = to_string(nums[index]);
    nums.erase(nums.begin() + index);

    // Recurse for remaining numbers
    return result + kthPermutation(n - 1, newK, nums);
}

