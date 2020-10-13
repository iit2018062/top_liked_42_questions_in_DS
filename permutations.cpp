class Solution {
public:
    void helper(vector<int>&arr,vector<vector<int>>&ans,int l,int h)
    {
      if(l==h){
        ans.push_back(arr);return;}
      for(int i=l;i<=h;i++)
      {
        swap(arr[i],arr[l]);
        helper(arr,ans,l+1,h);
        swap(arr[i],arr[l]);
      }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>ans;
      int n = nums.size();
      helper(nums,ans,0,n-1);
      return ans;
        
    }
};
