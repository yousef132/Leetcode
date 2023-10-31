class Solution {
public:
int count(string s){
    int cnt{};
    for (int i = 0; i < s.size(); ++i) {
        cnt+=s[i]=='1';
    }
    return cnt;
}

    public:
int numberOfBeams(vector<string>& bank) {
    int cnt{},ans{};
    for (int i = 0; i < bank.size()-1; ++i) {
        cnt=count(bank[i]);
        int j = i+1;
        if(cnt){
            while (j<bank.size()&&!count(bank[j]) ){
                j++;
            }
            if(j==bank.size()){
                break;
            }
            ans+=count(bank[j])*cnt;
            i=j-1;
        }
    }
    return ans;
}
};