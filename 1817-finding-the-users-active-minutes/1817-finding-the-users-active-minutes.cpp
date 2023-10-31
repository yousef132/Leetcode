class Solution {
public:
vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
    map<int,set<int>>mp;
    for (int i = 0; i < logs.size(); ++i) {
        mp[logs[i][0]].insert(logs[i][1]);
    }
    map<int,int >freq;
    for(auto it:mp){
        freq[it.second.size()]++;
    }
    vector<int>ans(k,0);
    // 2 2
    //
    for(auto it:freq){
        ans[it.first-1]=it.second;
    }
    return ans;
}

};