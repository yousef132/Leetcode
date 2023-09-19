class Solution {
public:
 bool canPlaceFlowers(vector<int>&v, int n) {
    int cnt{};
   if(v.size()==1 && v[0]==0){
        if(n<=1){
            return true;
        }
        return false;
    }
    for (int i = 0; i < v.size()-1; ++i) {
        if(!v[i]){
            if(!i){
                if(!v[i+1]){
                    v[i]=1;
                    cnt++;
                }
            }
            else{
                if(v[i-1]==0 && v[i+1]==0){
                    v[i]=1;
                    cnt++;
                }
            }
        }
    }
    if(v.back()==0){
        if(v[v.size()-2]==0 ){
            cnt++;
        }
    }
    if(cnt>=n){
        return true;
    }
    return false;
}
};