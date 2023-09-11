class Solution {
vector<vector<int>>ans;
void solve(int indx,vector<int>ds,int n,vector<int>& nums){
    if(indx==n){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[indx]);
    solve(indx+1,ds,n,nums);
    ds.pop_back();
    solve(indx+1,ds,n,nums);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<int>ds;
            solve(0,ds,nums.size(),nums);
        return ans;
    }
    
};