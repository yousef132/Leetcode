class Solution {
public:
int generateresult(int n) {
    int reversedNum = 0;
    int tmp=n;
    while (n != 0) {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }
    return tmp - reversedNum;
}
    public:
int countNicePairs(vector<int>& nums) {
    vector<int>res(nums.size(),0);
    for (int i = 0; i < nums.size(); ++i) {
        res[i]= generateresult(nums[i]);
    }
    map<int,int>mp;
    int ans{};
    int MOD = 1e9 + 7;
    for (int i = 0; i < res.size(); ++i) {
        ans=(ans+mp[res[i]])%MOD;
        mp[res[i]]++;
    }


    return ans;

}

};