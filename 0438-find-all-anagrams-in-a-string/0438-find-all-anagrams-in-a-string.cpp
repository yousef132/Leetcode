class Solution {
public:
vector<int> findAnagrams(string s, string p) {
    string tmp{};
    map<char,int>ms,mp;
    for (int i = 0; i < p.size(); ++i) {
        mp[p[i]]++;
    }
    for (int i = 0; i < p.size(); ++i) {
        ms[s[i]]++;
    }
    vector<int>ans;
    int l=0 ,r=p.size();
    if(ms==mp){
        ans.push_back(0);
    }
    
    while(r<s.size()){
        ms[s[r]]++;
        ms[s[l]]--;
        if(!ms[s[l]]){
            ms.erase(s[l]);
        }
        l++;
        if(ms==mp){
            ans.push_back(l);
        }
        r++;
    }
    return ans;
}
};