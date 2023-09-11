class Solution {
public:
bool isValid(long long  target, vector<int>& nums){
    if(nums[0]>target) return false;
    long long  prev=nums[0];
    for(int i=1;i<nums.size();++i){
        long long diff=target-prev;
        prev=nums[i]-diff;
        if(prev>target)
            return false;
    }
    return true;
}
public:
int minimizeArrayValue(vector<int>& nums) {
    int  l=0,r=*max_element(nums.begin(),nums.end());
    int ans=0,mid;
    while (l<r){
        mid=(l+r)>>1;
        if(isValid(mid,nums)){
            r=mid;
            ans=mid;
        }
        else{
            l=mid+1;
        }
    }

    
    return r;
}
};