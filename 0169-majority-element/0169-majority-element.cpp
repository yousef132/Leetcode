class Solution {
public:
 int majorityElement(vector<int>& nums) {
    map<int,int>mp;
    for (int i = 0; i < nums.size(); ++i) {
        mp[nums[i]]++;
    }
    int m{};
    for(auto i:mp ){
        if(i.second>nums.size()/2){
            m=i.first;
            break;
        }
    }
    return m;
     
}
};