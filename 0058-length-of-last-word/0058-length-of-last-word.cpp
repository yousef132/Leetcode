class Solution {
public:
  int lengthOfLastWord(string s) {
    int l=s.size();
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]!=' '){
            l=i;
            break;
        }
    }
    int cnt{};
    for(int i=l;i>=0;i--){
        if(s[i]==' '){
            break;
        }
        cnt++;
    }
    return cnt;

      
}
};