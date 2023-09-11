class Solution {
public:
int jump(vector<int>& nums) {
    int ans{}, n = nums.size(), curEnd{},max_jump=0;
    for (int i = 0; i < n-1; ++i)
    {
        if (max_jump < nums[i] + i) {
            max_jump = nums[i]+i ;
        }
        if (i == curEnd) {
            ans++;
            curEnd = max_jump;
        }
    }
    return ans;
    
}
};