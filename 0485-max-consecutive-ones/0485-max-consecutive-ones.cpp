class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& v) {
    int ones = 0,ans = 0;
    for (int i = 0; i < v.size(); ++i) {
        if(v[i] ==1)
            ones++;
        else{
            ans=max(ans,ones);
            ones=0;
        }
    }
    ans=max(ans,ones);

    return ans;
}

};