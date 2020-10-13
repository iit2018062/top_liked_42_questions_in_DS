class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();
      vector<int>ans;
      if(n<2)return ans;
      unordered_map<int,int>ump;
      for(int i=0;i<n;i++)
        ump[nums[i]]=i;
      int tmp=0;
      for(int i=0;i<n;i++)
      {
        tmp = target-nums[i];
        if(ump.find(tmp)!=ump.end()&&(i!=ump[tmp]))
        {
          ans.push_back(i);
          ans.push_back(ump[tmp]);
          return ans;
        }
        
      }
      return ans;
        
    }
};
