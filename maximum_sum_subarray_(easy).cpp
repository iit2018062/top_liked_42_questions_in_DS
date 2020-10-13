class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n = nums.size();
      if(n==0)return 0;
      if(n==1)return nums[0];
      int sum_so_far=0;
      int max_sum_so_far=INT_MIN;
      for(int i=0;i<n;i++)
      {
        sum_so_far+=nums[i];
       
        if(sum_so_far>max_sum_so_far)
        {
          max_sum_so_far = sum_so_far;
        }
         if(sum_so_far<0)
        {
          sum_so_far=0;
        }
      }
      return max_sum_so_far;
        
    }
};
