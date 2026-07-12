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
    int countNodes(TreeNode* root) {
        // int cnt = 0;
        // cntnodes(cnt, root);
        // return cnt;

        if(root == NULL) return 0;

        int l = countNodes(root->left);
        int r = countNodes(root->right);

        return 1 + l + r;
    
    // void cntnodes(int cnt, TreeNode* root){
    //     if(root == NULL) return;

    //     cnt++;
    //     cntnodes(cnt, root->left);
    //     cntnodes(cnt, root->right);
    }
};