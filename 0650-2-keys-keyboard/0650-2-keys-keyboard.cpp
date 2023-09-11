class Solution {
public:
int fun(int i,int n,int cop){
    if(i>n){
        return INT_MAX/2 ;
    }
    if(i==n) {

        return 1 ;
    }
        return min(2+fun(2*i,n,i),1+fun(i+cop,n,cop));
}
public:
    int minSteps(int n) {
        if(n==1)
        return 0;
        else if (n==2)
        return 2;
        else{
            return  fun(1,n,1);
        }
        
        
    }
};