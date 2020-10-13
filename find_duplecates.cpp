class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_map<int,int>ump;
      int n = nums.size();
      for(int i=0;i<n;i++)
      {
        if(ump.find(nums[i])!=ump.end())
          return nums[i];
        ump[nums[i]]++;
      }
      return -1;  
    }
};
