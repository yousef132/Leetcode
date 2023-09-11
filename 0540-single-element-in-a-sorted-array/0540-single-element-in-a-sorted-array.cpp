class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x=nums[0];
        if(nums.size()<3){
            if(nums.size()==1){
                return x;
            }
            else if(nums.size()==2){
                if(nums[0]!=nums[1]){
                    return nums[0];
                }
            }
        }
        if(nums[0]!=nums[1])
        return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2])
        return nums[nums.size()-1];
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1]){
                x= nums[i];
                break;
            }
        }
        return x;
    }
    
};