class Solution {
public:
  int partitionString(string s) {
    int ans{};
    //abacaba
    map<char,int>mp;
    for (int i = 0; i < s.size(); ++i) {
        if(mp[s[i]]){
            ans++;
            mp.clear();
            mp[s[i]]++;
        }
        else{
            mp[s[i]]++;
        }
    }
    if(!mp.empty())
        ans++;
      
    return ans;
}
};