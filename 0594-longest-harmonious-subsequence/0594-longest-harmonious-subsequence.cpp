class Solution {
public : 
    int findLHS(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    //coz subsequence not subarray
    int i=0, j=1, ans=0;
    while(j<nums.size()){
        int diff = nums[j] - nums[i];
        if(diff == 1) ans = max(ans, j-i+1);
        if(diff <= 1) j++;
        else i++;
    }
    return ans;

}


};