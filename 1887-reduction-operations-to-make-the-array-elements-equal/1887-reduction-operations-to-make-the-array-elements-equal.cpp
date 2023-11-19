class Solution {
public:
int reductionOperations(vector<int>& nums) {
    vector<int>v=nums;
    set<int>st;
    for (int i = 0; i < nums.size(); ++i) {
        st.insert(nums[i]);
    }
    map<int,int>mp;
    int cnt=0;
    for(auto it:st){
        mp[it]=cnt;
        cnt++;
    }

    int ans{};
    for (int & num : nums) {
        ans+=mp[num];
    }
    return ans;
}


};