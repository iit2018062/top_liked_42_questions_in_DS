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
    void helper(vector<int>&tmp,TreeNode*root)
    {
      if(root==NULL)return;
      helper(tmp,root->left);
      tmp.push_back(root->val);
      helper(tmp,root->right);
    }
    bool isValidBST(TreeNode* root) {
      if(root==NULL||(root->right==NULL && root->left==NULL))return true;
      vector<int>tmp;
      helper(tmp,root);
      for(int i=0;i<tmp.size()-1;i++)
      {
        if(tmp[i]>=tmp[i+1])
          return false;
      }
      return true;
        
    }
};
