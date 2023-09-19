class Solution {
public:
string reverseWords(string s) {
    vector<string>v;
    string tmp{};
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]!=' '){
            tmp+=s[i];
        }
        //  the sky is blue
        else{
            if(tmp.size()>0){
                v.push_back(tmp);
                tmp="";
            }
        }
    }
    if(tmp.size()>0){
        v.push_back(tmp);
        tmp="";
    }
    for(int i = v.size()-1 ;i>=0 ;i--){
        tmp+=v[i];
        tmp+=' ';
    }
    tmp.pop_back();
    return tmp;
}
};