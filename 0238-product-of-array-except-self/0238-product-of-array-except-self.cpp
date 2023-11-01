class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
    int zero{};
    vector<int>ans(nums.size(),0);
    long long t=1,t2=1;
    for (int i = 0; i < nums.size(); ++i) {
        if(nums[i]!=0){
            t2*=nums[i];
        }
        t*=nums[i];
        zero+=(!nums[i]);
    }
    if(zero>1){
        return ans;
    }
    // -1,1,0,-3,3
    // t= 0
    // t2=9
    for (int i = 0; i < nums.size(); ++i) {
        if(nums[i]){
            ans[i]=t/nums[i];
        }
        else{
            ans[i]=t2;
        }
    }
    return ans;
}

};