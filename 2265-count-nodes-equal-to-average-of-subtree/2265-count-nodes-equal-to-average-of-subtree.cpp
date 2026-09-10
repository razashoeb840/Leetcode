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
public:
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            queue<TreeNode*> q1;
            q1.push(node);

            int sum = 0, cnt = 0;

            while (!q1.empty()) {
                TreeNode* x = q1.front();
                q1.pop();

                sum += x->val;
                cnt++;

                if (x->left) q1.push(x->left);
                if (x->right) q1.push(x->right);
            }

            if (sum / cnt == node->val)
                ans++;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        return ans;
    }
};