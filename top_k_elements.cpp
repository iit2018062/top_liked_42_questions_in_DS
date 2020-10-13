class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      int  n = nums.size();
      unordered_map<int,int>ump;
      priority_queue<pair<int,int>>pq;
      vector<int>ans;
      for(int i=0;i<n;i++)
        ump[nums[i]]++;
      for(auto ip=ump.begin();ip!=ump.end();ip++)
        pq.push(make_pair(ip->second,ip->first));
      int c=0;
      while(!pq.empty()&&(c!=k))
      {
        pair<int,int>p = pq.top();
        pq.pop();
        c++;
        ans.push_back(p.second);
      }
      return ans;
        
    }
};
