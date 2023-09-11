class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
    int indx{},mx=0;
    string ans{};
    for (int i = 0; i < strs.size() ; ++i) {
        mx=max(mx,(int)strs[i].size());
    }
    for (int i = 0; i < mx; ++i) {
        bool ok=1;
        char ch=strs[0][indx];
        for (int j = 1; j < strs.size(); ++j) {
            if(strs[j][indx]!=ch){
                ok=0;
            }
        }
        if(!ok){
            break;
        }
        else{
            ans+=ch;
        }
        indx++;
    }
    return ans;
       
}

};