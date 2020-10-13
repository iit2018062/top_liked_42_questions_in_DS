class Solution {
public:
       
    int search(vector<int> arr, int i,int j,int x){
        
        for(int k=i;k<=j;k++){
            if(arr[k] == x)
                return k;
        }
        
        return 0;
        
    }
    TreeNode* fun(vector<int>pre,vector<int>in,int start,int end,int &pos)
    {
    
        if(start>end)
            return NULL;
        
        int mid = (start+end)/2;
        TreeNode *x= new TreeNode(pre[pos++]);
        
        if(start==end)
            return x;
        
        int find =  search(in,start,end,x->val);
        x->left  = fun(pre,in,start,find-1,pos);
        x->right =  fun(pre,in,find+1,end,pos); 
        
        return x;
        
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        
        
         if(in.size()==0||pre.size()==0)
         return NULL;
        int pos=0;
        return fun(pre,in,0, in.size()-1,pos);
        
    }
};

