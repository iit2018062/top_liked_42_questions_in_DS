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
    bool helper(TreeNode*l1,TreeNode*l2)
    {
      if(l1==NULL && l2==NULL)return true;
      if(l1==NULL||l2==NULL)return false;
      return (l1->val==l2->val)&& helper(l1->left,l2->right)&& helper(l1->right,l2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
      return helper(root->left,root->right);
    }
};
