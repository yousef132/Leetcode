class Solution {
public:
  int distMoney(int money, int children) {
    int ans{};
    if(money<children){
        return -1 ;
    }
    vector<int>ch (children,1);
    money-=children;
    int need;
    for (int i = 0; i < children; ++i) {
        need = 8 - ch[i];
        if (money >= need) {
            if(i!=children-1){
                ch[i] = 8;
                money -= need;
            }
            else{
                ch[i]+=money;
            }
        }
        //money < 7
        else{
            if(i==children-1){
                if(money==3){
                    ch[i-1]++;
                    ch[i]+=money-1;
                }
            }
            else{
                break;
            }

        }
    }
    for (int i = 0; i < children; ++i)
        ans+=(ch[i]==8);
    return ans;
}
};