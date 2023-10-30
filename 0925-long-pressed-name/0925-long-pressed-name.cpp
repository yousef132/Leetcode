class Solution {
public:
vector<string>split(string s){
    vector<string>n;
    string tmp{};
    tmp+=s[0];
    for (int i = 1; i < s.size(); ++i) {
        if(s[i]==tmp.back()){
            tmp+=s[i];
        }
        else{
            n.push_back(tmp);
            tmp="";
            tmp+=s[i];
        }
    }
    n.push_back(tmp);
    return n;
}
    public :
bool isLongPressedName(string name, string typed) {
    if(name.size()>typed.size()){
        return false;
    }
    vector<string>n,t;
    n= split(name);
    t= split(typed);
    if(n.size()!=t.size()){
        return false;
    }
    for (int i = 0; i < t.size(); ++i) {
        if(n[i].front()!=t[i].front()){
            return false;
        }
        else{
            if(n[i].size()>t[i].size()){
                return false;
            }
        }
    }
    return true;
}
};