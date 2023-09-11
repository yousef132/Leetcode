class Solution {
public:
string removeStars(string s) {
    string ans="";
    int cnt{};
    //eet**cod*e
    for (int i = s.size() -1 ; i>=0 ;i--){
        if(s[i]=='*'){
            cnt++;
        }
        else {
            if(cnt){
                cnt--;
            }
            else {
                ans+=s[i];
            }
        }
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
};