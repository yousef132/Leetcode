class Solution {
public:
    int passThePillow(int n, int time) {

        if(time<n){
            return 1+time;
        }
        int a = time/(n-1);
        int b = time%(n-1);
        if(a%2==0) return 1+b;
        return n-b;
        
        
    }
};