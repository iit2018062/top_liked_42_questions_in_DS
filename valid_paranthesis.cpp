class Solution {
public:
    bool isValid(string s) {
      int n = s.length();
      if(n==0)return true;
      stack<int>st;
      for(int i=0;i<n;i++)
      {
        if(st.empty()&&(s[i]=='('||s[i]=='['||s[i]=='{'))
          
          st.push(s[i]);
        else if((!st.empty())&&(s[i]=='('||s[i]=='['||s[i]=='{') )st.push(s[i]);
        else
        {
          if(st.empty())return false;
          char ch = st.top();
          st.pop();
           if(s[i]==')')
           {
             if(ch=='['||ch=='{')
               return false;
             
           }
          else if(s[i]==']')
          {
            if(ch=='('||ch=='{')
              return false;
          }
          else if(s[i]=='}')
          {
            if(ch=='('||ch=='[')
              return false;
            
          }
        }
        
      }
      return (st.empty());
        
    }
};
