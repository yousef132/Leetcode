class Solution {
public:

bool ok(int mid,vector<int>arr,int days) {
    int n = arr.size();
    int cnt{}, sum{};
    for (int i = 0; i < arr.size(); ++i) {
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            sum=arr[i];
            cnt++;
        }
    }
    
    return (cnt>=days);
}
public:
  int shipWithinDays(vector<int>& weights, int days) {

    int l=0,r=0;
    for (int i = 0; i < weights.size(); ++i) {
        l=max(l,weights[i]);
        r+=weights[i];
    }

    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(ok(mid,weights,days)){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    return r;
}
};