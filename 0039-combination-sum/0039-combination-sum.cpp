class Solution {
    public :
     vector <vector<int>>ans;
    void findcombinations(int i,vector<int>ds,vector<int>v,int target){
    if(i==v.size()){
        return;
    }
    if(target==0){
        ans.push_back(ds);
        return;
    }
    if(target<0)
        return;
    findcombinations(i+1,ds,v,target);
    ds.push_back(v[i]);
    findcombinations(i,ds,v,target-v[i]);
    ds.pop_back()   ;

}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
      findcombinations(0,ds,candidates,target);
      return ans;
    }
    
};