class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>tmp;
      int n = nums.size();
      int c=0;
      for(int i=0;i<n;i++)
      {
        if(nums[i]!=0)
          tmp.push_back(nums[i]);
        else c++;
      }
      for(int i=0;i<c;i++)
        tmp.push_back(0);
      nums=tmp;
    }
};
