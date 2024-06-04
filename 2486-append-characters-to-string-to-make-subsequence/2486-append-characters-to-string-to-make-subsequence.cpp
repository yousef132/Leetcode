class Solution {
public:
int appendCharacters(string s, string t) {
    int i,j=0;
    // s => coaching
    // t => coding
    for ( i= 0; i < t.size(); ++i) {
        bool flag = false;
        for (; j < s.size(); ++j) {
            if(s[j] == t[i])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
            break;
        j++;
    }
    return t.size()- i;
}
};