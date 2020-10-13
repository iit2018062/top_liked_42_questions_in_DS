class Solution {
public:

bool DFSSearch(vector<vector<char>>& board, string &word,int row,int col,int index)
{
    if(index == word.length())
        return true;
    if(row < 0 || row >= board.size() || col < 0 || col >= board[0].size() )
        return false;
    if(board[row][col] != word[index] || board[row][col]=='$')
        return false; 
    index++; 
    board[row][col]='$';
    bool res = (DFSSearch(board,word,row,col-1,index)|| DFSSearch(board,word,row,col+1,index)||                                   DFSSearch(board,word,row-1,col,index)|| DFSSearch(board,word,row+1,col,index) );
    board[row][col]=word[index-1];
    return res;
}
bool exist(vector<vector<char>>& board, string word) {
    int nrow = board.size();
    int ncol = board[0].size();
    
    for(int i=0;i<nrow;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            if(board[i][j]==word[0] && DFSSearch(board,word,i,j,0))
            {
                return true;
            }
        }
    }
    
    return false;
    
}
};
