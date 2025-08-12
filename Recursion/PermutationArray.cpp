#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> premute(vector<int>& nums) {
    vector<vector<int>> ans;
    if (nums.empty()) return ans;

    sort(nums.begin(), nums.end());
    do {
        ans.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return ans;
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    if (nums.empty()) return ans;

    sort(nums.begin(), nums.end());
    do {
        ans.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return ans;
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    if (nums.empty()) return ans;

    sort(nums.begin(), nums.end());
    do {
        ans.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return ans;
}
#include <iostream>
#include <vector>   
#include <algorithm>
using namespace std;
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    if (nums.empty()) return ans;

    sort(nums.begin(), nums.end());
    do {
        ans.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return ans;
}


int main(){

    return 0;
}