class Solution {
public:
        vector<string> commonChars(vector<string>& words) {
        vector<map<char,int>> ans;
        for (int i = 0; i < words.size(); ++i) {
            map<char,int> freq;
            for (int j = 0; j < words[i].size(); ++j) {
                freq[words[i][j]]++;
            }
            ans.push_back(freq);
        }
        vector<string>result;
        for(char ch = 'a' ; ch<='z';ch++){
            int mn = INT_MAX;
            for (int i = 0; i < ans.size(); ++i) {
                 mn=min(mn,ans[i][ch]);
            }
            cout<<mn<<" "<<ch<<endl;
            for (int i = 0; i < mn; ++i) {
                result.push_back(string(1, ch));
            }
        }
        return result;

    }
};