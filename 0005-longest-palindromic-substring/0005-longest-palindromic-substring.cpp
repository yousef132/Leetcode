class Solution {
public:
   int check(int n ,string s, int l ,int r){
    while(l>=0&&r<n){
        if(s[l]!=s[r]){
            break;
        }
        l--,r++;
    }
    return r-l-1;
}
string longestPalindrome(string s) {
    int max_len=1,st{},end{}, n=s.size();
    for (int i = 0; i < n-1; ++i) {
        // for even and odd size
        int tmp=max(check(n ,s,i ,i ),check(n, s ,i ,i + 1));
        if(tmp> end-st){
            st = i-(tmp-1)/2;
            end=i+tmp/2;
        }
    }
    
    
    
    return s.substr(st,end-st+1);
}
};