class Solution {
public:
int compress(vector<char>& v) {
    //"a","a","b","b","c","c","c"
    //a b b c *
    int cnt=1;
    v.push_back('^');
    string s{};
    char ch=v[0];
    //'a','a','b','b','c','c','c'
    for (int i = 1; i < v.size(); ++i) {
        if(v[i]==ch){
            cnt++;
        } else{
            if(cnt==1){
                s+=ch;
            }
            else{
                s+=ch;
                s+=to_string(cnt);
            }
            ch=v[i];
            cnt=1;
        }
    }
    for(int i=0;i<s.length();i++){
        v[i]=s[i];
    }
    return s.length();
}


};