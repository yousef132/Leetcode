class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int l{},r{},ans{};
    map<char,int>mp;
    while(r<s.size()){
        mp[s[r]]++;
        if(mp.size()==r-l+1){
            ans=max(ans,r-l+1);
        }
        else{
            while(mp.size()<r-l+1){
                mp[s[l]]--;
                if(!mp[s[l]])
                    mp.erase(s[l]);
                l++;
            }
        }
        r++;
    }
      
    return ans;
}
};