class Solution {
public:
    int ans=0;
    void helper(vector<int>&arr,int index,int t,int s)
    { 
      
     if(index==arr.size())
     {
       if(s==0)
         ans++;
       
     }
      else 
      {
        helper(arr,index+1,t+arr[index],s+arr[i]);
        helper(arr,index+1,t-arr[index],s);
      }
     
      
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        ans=0;
      helper(nums,0,0,S);
      return ans;
    }
};
