class Solution {
public:
int longestPalindrome(string s) {
    map<char,int> mp;
    vector<int> v;
    for (int i = 0; i < s.size(); ++i) {
        mp[s[i]]++;
    }
    int odd = -1;
    for(auto it : mp){
        v.push_back(it.second);
    }
    int ans = 0;
    for (int i = 0; i < v.size(); ++i) {
        if(v[i]%2!=0){
            ans+=(v[i]-1);
            odd = 1;
        }
        else{
            ans+=v[i];
        }
    }
    if(odd ==1 )
        ans++;
    return ans;
}
};