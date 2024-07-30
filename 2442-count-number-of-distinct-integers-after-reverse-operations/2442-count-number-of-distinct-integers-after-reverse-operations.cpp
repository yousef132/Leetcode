class Solution {
public:
int cti(int n)
{
    int num = 0;
    while(n)
    {
        int x = n%10;
        num = num * 10 + x;
        n = n/10;
    }
    return num;
}
    public:
int countDistinctIntegers(vector<int>& nums) {
    map<int,int>m;
    for (int i = 0; i < nums.size(); ++i) {
        m[nums[i]]++;
    }
    for (int i = 0; i < nums.size(); ++i) {
        int num = cti(nums[i]);
        if(!m.count(num)){
            m[num]++;
        }
    }
    return m.size();
}
};