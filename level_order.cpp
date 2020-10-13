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
   int maxDepth(TreeNode* root) {
      if(root==NULL)return 0;
      int lh = maxDepth(root->left);
      int rh = maxDepth(root->right);
      if(lh>rh)return lh+1;
      return rh+1;
        
    }
     void helper(TreeNode*root,int l,vector<int>&tmp)
     {
       if(root==NULL)return;
       if(l==0)tmp.push_back(root->val);
       helper(root->left,l-1,tmp);
       helper(root->right,l-1,tmp);
     }
    vector<vector<int>> levelOrder(TreeNode* root) {
      int h = maxDepth(root);
      vector<vector<int>>ans;
      for(int i=0;i<h;i++)
      {
        vector<int>tmp;
        helper(root,i,tmp);
        ans.push_back(tmp);
      }
      return ans;
        
    }
};
