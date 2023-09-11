class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mx=0,ans=0;
      for(int i=prices.size()-1 ;i>=0;i--){
          if(prices[i]>mx){
              mx=max(mx, prices[i]);
          }
          else{
              ans=max(ans,mx-prices[i]);
          }
          
      }
      return ans;
        

        
  }
};