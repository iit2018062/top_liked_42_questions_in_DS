class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
      vector<vector<string>>ans;
      int n = arr.size();
      if(n==0)return ans;
      unordered_map<string,vector<string>>ump;
      for(int i=0;i<n;i++)
      {
        string s=arr[i];
        sort(s.begin(),s.end());
        if(ump.find(s)==ump.end())
        {
          vector<string>tmp;
          tmp.push_back(arr[i]);
          ump[s]=tmp;
        }
        else if(ump.find(s)!=ump.end())
        {
          ump[s].push_back(arr[i]);
        }
      }
      unordered_map<string,vector<string>>::iterator ip;
      for(ip=ump.begin();ip!=ump.end();ip++)
      {
        ans.push_back((ip->second));
        
      }
      return ans;
    }
};
