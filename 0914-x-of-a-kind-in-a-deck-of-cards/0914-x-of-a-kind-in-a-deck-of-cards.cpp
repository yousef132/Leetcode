class Solution {
public:
bool hasGroupsSizeX(vector<int>& deck) {
    map<int,int>mp;
    for(int i = 0 ;i<deck.size();i++){
        mp[deck[i]]++;
    }
    vector<int>v;
    for(auto it:mp){
        v.push_back(it.second);
    }
    int gcd=0;
    for (int i = 0; i < v.size(); ++i) {
        gcd=__gcd(gcd,v[i]);
    }
    return gcd!=1;      


}
};