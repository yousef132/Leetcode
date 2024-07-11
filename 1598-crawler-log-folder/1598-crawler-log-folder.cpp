class Solution {
    
    private:
    int Type(string s ){
    int dots = 0;
    for (char i : s)
        if(i=='.')
            dots++;

    return dots;
}
    
public:
    int minOperations(vector<string>& logs) {
          int ans = 0;
    for (int i = 0; i < logs.size(); ++i) {
        if(Type(logs[i]) == 0){
            ans++;
        }
        else if(Type(logs[i]) == 2){
            if(ans!=0)
                ans--;
        }
    }
    return ans;
    }
};