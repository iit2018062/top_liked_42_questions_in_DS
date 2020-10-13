class Solution {
public:
    int helper(int n)
    {
      int c=0;
      while(n)
      {
        n&=(n-1);
        c++;
      }
      return c;
    }
    vector<int> countBits(int num) {
      vector<int>tmp;
      for(int i=0;i<=num;i++)
      {
        tmp.push_back(helper(i));
        
      }
      return tmp;
        
    }
};
