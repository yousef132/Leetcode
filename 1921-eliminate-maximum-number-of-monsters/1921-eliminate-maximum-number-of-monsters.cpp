class Solution {
public:
int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    int n  = dist.size()    ;
    vector<int>m(n);
    for (int i = 0; i < n; ++i) {
        m[i]=(dist[i] + speed[i] - 1) / speed[i];
    }
    int cnt=0,ans=1;
    //[3,5,7,4,5]
    //[2,3,6,3,2]
    // 1 2 1 1 2
    sort(m.begin(),m.end());
    for (int i = 1; i < n; ++i) {
        cnt++;
        if(m[i]>cnt){
            ans++;
        }
        else{
            break;
        }
    }
    return ans;
}


};