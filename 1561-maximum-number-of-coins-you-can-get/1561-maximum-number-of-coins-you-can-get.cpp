class Solution {
public:
int maxCoins(vector<int>& v) {
    int n =v.size()/3;
    sort(v.begin(),v.end());
    int ans=0;
    for(int i =n;i<v.size();i+=2){
        ans+=v[i];
    }
    return ans;
}
};