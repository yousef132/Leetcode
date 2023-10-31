class Solution {
public:
vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool>ans(l.size());
    for (int i = 0; i < l.size(); ++i) {
        if(r[i]-l[i]+1<2) {
            ans[i]=false;
        }
        else{
            vector<int> temp(nums.begin() + l[i], nums.begin() + r[i]+ 1);
            sort(temp.begin(),temp.end());
            bool done = false;
            int diff= temp[1]-temp[0];
            for (int j = 1; j < temp.size()-1; ++j) {
                if(temp[j+1]-temp[j]!=diff){
                    ans[i]=false;
                    done= true;
                }
            }
            if(!done){
                ans[i]=true;
            }
        }
    }
    return ans;
}

};