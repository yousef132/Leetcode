class Solution {
public:
   bool ok(vector<int>&v,int mid,int h){
    int cnt{};
    for (int i = 0; i < v.size(); ++i) {
        if(v[i]<=mid)    {
            cnt++;
        }
        else{
            cnt+= ceil(double(v[i])/double(mid));
        }
    }
    return (cnt<=h);
}
public :
int minEatingSpeed(vector<int>& piles, int h) {
    int l=1,r=1000000000;
    int mid,ans{};
    
    while(l<r){
        mid=(l+r)>>1;
        if(ok(piles,mid,h)){
            ans=mid;
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    return l;
}
};