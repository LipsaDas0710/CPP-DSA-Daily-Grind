/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int matchingNodes = 0;

    // Returns a pair: {subtree_sum, subtree_node_count}
    pair<int, int> postOrder(TreeNode* node) {
        if (!node) return {0, 0};

        auto [leftSum, leftCount] = postOrder(node->left);
        auto [rightSum, rightCount] = postOrder(node->right);

        int totalSum = leftSum + rightSum + node->val;
        int totalCount = leftCount + rightCount + 1;

        // Integer division automatically handles rounding down
        if (totalSum / totalCount == node->val) {
            matchingNodes++;
        }

        return {totalSum, totalCount};
    }

public:
    int averageOfSubtree(TreeNode* root) {
        matchingNodes = 0;
        postOrder(root);
        return matchingNodes;
    }
};