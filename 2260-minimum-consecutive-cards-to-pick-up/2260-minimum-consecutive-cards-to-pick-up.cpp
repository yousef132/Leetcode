class Solution {
    public:
int minimumCardPickup(vector<int>& cards) {
    map<int ,vector<int>>mp;
    for(int i=0;i<cards.size();i++){
        mp[cards[i]].push_back(i);
    }
    int ans=INT_MAX;
    for(auto it:mp){
        int cnt=INT_MAX;
        if(it.second.size()>1){
            for (int i = 0; i < it.second.size()-1; ++i) {
                cnt=min(cnt,(it.second[i+1]-it.second[i])+1);
            }
            ans=min(ans,cnt);
        }
    }
    if(ans==INT_MAX)
        return -1;
    return ans;
    
}
    
};