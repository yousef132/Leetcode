class Solution {
public:
  int totalFruit(vector<int>& fruits) {
    int l=0,r=0,ans{};
    unordered_map<int ,int >mp;
    while(r<fruits.size()){
        mp[fruits[r]]++;
        if(mp.size()<=2){
            ans= max(ans,r-l+1);
        }
        else{
            mp[fruits[l]]--;
            if(!mp[fruits[l]]) { mp.erase(fruits[l]); }
            l++;
        }
        r++;
    }
    return ans;
      
}

};