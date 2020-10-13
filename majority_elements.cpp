class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
         if(n==1)return nums[0];
      unordered_map<int,int>ump;
      for(int i=0;i<n;i++)
      {
        ump[nums[i]]++;
        if(ump[nums[i]]>(n/2))return nums[i];
      }
      return -1;
    }
};
