class Solution {
public:
    string longestPalindrome(string s) {
 int n = s.length(); 
 int start=0;
 vector<vector<bool>>dp(n,vector<bool>(n,false));
    int maxLength = 1; 
    for (int i = 0; i < n; ++i) 
        dp[i][i] = true; 
    
    for (int i = 0; i < n - 1; ++i) { 
        if (s[i] == s[i + 1]) { 
            dp[i][i + 1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    } 
    for (int k = 3; k <= n; ++k) { 
        for (int i = 0; i < n - k + 1; ++i) { 
            int j = i + k - 1; 
            if (dp[i + 1][j - 1] && s[i] == s[j]) { 
                dp[i][j] = true; 
                if (k > maxLength) { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    }
      string str;
      for(int i=start;i<start+maxLength;i++)
      str.push_back(s[i]);
      return str;
    }
};
