class Solution {
public:
int alternatingSubarray(vector<int>& nums) {
    int tmp{},ans{};
    bool l= false;
    //2,3,4,3,4
    for (int i = 0; i < nums.size()-1; ++i) {
        start:
       if(!l){
           if(nums[i+1]==nums[i]+1){
               tmp++;
               l= true;
           }
           else{

               if(tmp>0){
                   ans=max(ans,tmp+1);
               }
               tmp=0;
           }

       }
       else{
           if(nums[i]==nums[i+1]+1){
               tmp++;
               l= false;
           } else{
               if(tmp>0){
                   ans=max(ans,tmp+1);
               }
               l= false;
               tmp=0;
               goto start;

           }
       }
    }
    if(tmp>0){
        ans=max(ans,tmp+1);
    }
    if(ans==0){
        return -1;
    }
    return ans;
}
};