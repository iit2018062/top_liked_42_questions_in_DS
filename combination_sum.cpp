class Solution {
public:
   void helper(vector<int>arr,vector<int>&tmp,int sum,vector<vector<int>>&ans,int l)
   {
     if(sum==0)
     {
       ans.push_back(tmp);
       return;
     }
     if(sum<0)return;
     for(int i=l;i<arr.size();i++)
     {
       tmp.push_back(arr[i]);
       helper(arr,tmp,sum-arr[i],ans,i);
       tmp.pop_back();
     }
   }
    vector<vector<int>> combinationSum(vector<int>& arr, int sum) {
      vector<int>tmp;
      vector<vector<int>>ans;
      helper(arr,tmp,sum,ans,0);
      return ans;
        
    }
};
