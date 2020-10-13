class Solution {
public:
    int maxProfit(vector<int>& arr) {
      
      int p =INT_MIN;
      int m=INT_MAX;
      int n =arr.size();
      if(n==0||n==1)return 0;
      for(int i=0;i<n;i++)
      {
        m = min(m,arr[i]);
        p = max(p,arr[i]-m);
      }
      return p;
        
    }

