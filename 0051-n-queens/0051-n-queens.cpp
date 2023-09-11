class Solution {
    public :
    bool safe(int row,int col,vector<string >v,int n){
    int r=row,c=col;
    while(row>=0&&col>=0){
        if(v[row][col]=='Q')
            return false;
        row--;
        col--;
    }
    row=r;
    col=c;
    while (col>=0){
        if(v[row][col]=='Q')
            return false;
        col--;
    }
    row=r;
    col=c;
    while(row<n&&col>=0){
        if(v[row][col]=='Q')
            return false;
        row++;
        col--;
    }
    return true;
}
public :
void fun(int col,vector<string >&v,int n,vector<vector<string>>&ans){
    if(col==n){
        ans.push_back(v);
        return;
    }
    for (int i = 0; i < n; ++i) {
        if(safe(i,col,v,n)) {
            v[i][col]='Q';
            fun(col+1,v,n,ans);
            v[i][col]='.';
        }
    }

}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>v(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        fun(0,v,n,ans);
        return ans;
        
    }
};