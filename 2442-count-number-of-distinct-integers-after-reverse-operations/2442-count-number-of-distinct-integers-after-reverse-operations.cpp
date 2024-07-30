class Solution {
public:
string processNumber(string number) {
    // Remove trailing zeros
    number.erase(number.find_last_not_of('0') + 1);

    // Reverse the string
    reverse(number.begin(), number.end());

    return number;
}
    public:
int countDistinctIntegers(vector<int>& nums) {
    map<string,int>m;
    for (int i = 0; i < nums.size(); ++i) {
        m[to_string(nums[i])]++;
    }
    for (int i = 0; i < nums.size(); ++i) {
        string s = processNumber(to_string(nums[i]));
        if(!m.count(s)){
            m[s]++;
        }
    }
    return m.size();
}
};