class Solution {
public:
    
    void backtrack(vector<string>&res,int o,int c, string str)
    {
        if (o == 0 and c ==0) 
        {
            res.push_back(str);
            return;
        }
        if(o > 0)
            backtrack(res,o-1,c,str+"(");
        if(c>o)
            backtrack(res,o,c-1,str+")");
    }
    
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res,n, n,"");
        return res;
    }
};
