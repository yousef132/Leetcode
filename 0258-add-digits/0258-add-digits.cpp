class Solution {
public :
int sum(int x){
    int sum{};
    string s=to_string(x);
    for(int i = 0 ;i< s.size();i++){
        sum+=s[i]-'0';
    }
    return sum;
}
public:
    int addDigits(int num) {
        if(num<10){
            return num;
        }
        
        int cnt=0;
        while (num>=10){
            cnt++;
            num=sum(num);
        }
        
        return num;
    }
    
};