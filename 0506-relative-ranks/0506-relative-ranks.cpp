class Solution {
public:
   vector<string> findRelativeRanks(vector<int>& v) {
    vector<int> sorted = v;
    sort(sorted.rbegin(),sorted.rend() );
    map<int,string>mp;
    for (int i = 0; i < sorted.size(); ++i) {
        if(i==0)
            mp[sorted[i]] ="Gold Medal";
        else if(i==1)
            mp[sorted[i]] ="Silver Medal";
        else if(i==2)
            mp[sorted[i]] ="Bronze Medal";
        else
            mp[sorted[i]] = to_string(i+1);
    }
    vector<string> ans;
    for (int i = 0; i < v.size(); ++i) {
        ans.push_back(mp[v[i]]);
    }
return ans;

}

};