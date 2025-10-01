#include <iostream>
#include <vector>
#include <numeric>

// A recursive function to find all subsequences with a sum equal to k
// Parameters:
//   index: The current index of the array we are considering.
//   arr: The input array of integers.
//   ans: The current subsequence being built.
//   sum: The sum of the elements in the current subsequence.
//   k: The target sum.
void printSubsequencesWithSumK(int index, std::vector<int>& arr, std::vector<int>& ans, int sum, int maxSum) {
    // Base case: If we have reached the end of the array,
    // check if the current subsequence's sum equals k.
    if (index == arr.size()) {
        if (sum > maxSum) {
            maxSum  = sum;
            // If the sum matches k, print the subsequence.
            for (int val : ans) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
        return;
    }

    // Recursive case 1: Take the current element
    // Add the current element to the subsequence and update the sum.
    ans.push_back(arr[index]);
    sum += arr[index];

    // Recur for the next index.
    printSubsequencesWithSumK(index + 1, arr, ans, sum, maxSum);

    // Backtrack: Remove the current element to explore other possibilities.
    sum -= arr[index];
    ans.pop_back();

    // Recursive case 2: Do not take the current element
    // Simply recur for the next index without adding the current element.
    printSubsequencesWithSumK(index + 1, arr, ans, sum, maxSum);
}

int main() {
    std::vector<int> arr = {1, 2, 1};
    int k = 2;
    std::vector<int> ans;

    std::cout << "Finding subsequences with sum " << k << " in the array {1, 2, 1}:" << std::endl;
    printSubsequencesWithSumK(0, arr, ans, 0, k);

    // Example with a different array and sum
    std::cout << "\nFinding subsequences with sum 5 in the array {3, 1, 2, 4}:" << std::endl;
    std::vector<int> arr2 = {3, 1, 2, 4};
    int k2 = 5;
    std::vector<int> ans2;
    printSubsequencesWithSumK(0, arr2, ans2, 0, k2);

    return 0;
}
