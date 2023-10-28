class Solution {
public:
int longestAlternatingSubarray(vector<int>& nums, int threshold) {
    int ans{};
    for (int i = 0; i < nums.size(); ++i) {

        //3,2,5,4
        if(nums[i]%2==0&&nums[i]<=threshold){
            int tmp  = 1;
            ans=max(ans,tmp);
            bool iseven= false;
            for (int j = i+1; j < nums.size(); ++j) {
                if(!iseven){
                    if(nums[j]%2==0)
                    {
                        ans=max(ans,tmp);
                        break;
                    }
                    else{
                        if(nums[j]>threshold){
                            ans=max(ans,tmp);
                            break;
                        }
                        tmp++;
                        ans=max(ans,tmp);
                        iseven= true;
                    }
                }
                else{
                    if(nums[j]%2!=0){
                        ans=max(ans,tmp);
                        break;
                    }
                    else{
                        if(nums[j]>threshold){
                            ans=max(ans,tmp);
                            break;
                        }
                        tmp++;
                        ans=max(ans,tmp);
                        iseven= false;
                    }
                }
            }
        }
    }
    return ans;
}


};