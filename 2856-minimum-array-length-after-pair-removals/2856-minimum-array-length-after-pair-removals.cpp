class Solution {
public:
int minLengthAfterRemovals(vector<int>& nums) {
    map<int,int>freq;
    for (int i = 0; i < nums.size(); ++i) {
        freq[nums[i]]++;
    }
    int mxf=0;
    for (int i = 0; i < nums.size(); ++i) {
        mxf=max(mxf,freq[nums[i]]);
    }
    if(mxf<=nums.size()/2){
        if(nums.size()%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    return 2*mxf - nums.size();

}
};