class Solution {
public:
int solve(vector<int>& potions, long long success, long long a, int m){
        int s = 0;
        int e = m-1;
        int ans = -1;
        
        while(s <= e){
               int   mid =(s+e)/2;

            long long b = potions[mid];
            if(a*b >= success){
                e = mid - 1;
                ans = mid;
            }
            else{
                s = mid+1;
            }  
        }
        
        return ans;
    }
    
public :
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    vector<int>v;
    sort(potions.begin(),potions.end());
    for (int i = 0; i < spells.size(); ++i) {
        if(spells[i]>=success){
            v.push_back(potions.size());
            continue ;
        }
      int tmp= solve(potions,success,spells[i],potions.size());
         if(tmp==-1){
          v.push_back(0);
         }
        else{
         v.push_back(potions.size()-tmp);
         }
        
    }
    return v;
}
};