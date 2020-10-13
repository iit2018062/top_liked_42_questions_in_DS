class Solution {
public:
   void helper(vector<int>&arr,vector<int>&tmp,int index,vector<vector<int>>&ans)
   {
     ans.push_back(tmp);
     for(int i=index;i<arr.size();i++)
     {
       tmp.push_back(arr[i]);
       helper(arr,tmp,i+1,ans);
       tmp.pop_back();
     }
   }
  
    vector<vector<int>> subsets(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<vector<int>>ans;
      vector<int>tmp;
      helper(nums,tmp,0,ans);
      return ans;
        
    }
};
