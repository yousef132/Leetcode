class Solution {
    public :
    bool ok(int mid,vector<int>&v,int target){
    int sum{};
    for (int i = 0; i < mid; ++i) {
        sum+=v[i];
    }
    int mxsum=sum;
    for (int i = mid; i < v.size(); ++i) {
        sum+=v[i];
        sum-=v[i-mid];
        mxsum=max(mxsum,sum);
    }
    return mxsum>=target;
}
    
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int n=nums.size();
    int l=1,r=n;
    int ans{};
    while(l<=r){
        int mid=(l+r)/2;
        if(ok(mid,nums,target)){
             ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
      return ans;  
    }
};