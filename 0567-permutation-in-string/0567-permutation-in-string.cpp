class Solution {
public:
   bool checkInclusion(string s1, string s2) {
       if(s2.size()<s1.size()){
           return false ;
       }
        string tmp{};
    map<char,int>ms,mp;
    for (int i = 0; i < s1.size(); ++i) {
        mp[s1[i]]++;
    }
    for (int i = 0; i < s1.size(); ++i) {
        ms[s2[i]]++;
    }
    int l=0 ,r=s1.size();
    if(ms==mp){
       return true ;
    }
       
    while(r<s2.size()){
        ms[s2[r]]++;
        ms[s2[l]]--;
        if(!ms[s2[l]]){
            ms.erase(s2[l]);
        }
        l++;
        if(ms==mp){
            return true ;
        }
        r++;
    }
    return false;
}
};