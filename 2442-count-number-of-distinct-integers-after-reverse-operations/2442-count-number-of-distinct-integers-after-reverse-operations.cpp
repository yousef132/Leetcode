class Solution {
public:
string processNumber(string number) {
   // Remove trailing zeros
    int end = number.size() - 1;
    while (end >= 0 && number[end] == '0') {
        --end;
    }

    // Reverse the string
    std::string result;
    for (int i = end; i >= 0; --i) {
        result.push_back(number[i]);
    }

    return result;
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