class Solution {
public:
int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    map<int,int>freq;
    for (int & i : arr) {
        freq[i]++;
    }
    sort(arr.begin(),arr.end());
    vector<int>::iterator ip;
    ip = unique(arr.begin(),arr.begin() + arr.size());
    arr.resize(distance(arr.begin(), ip));
    for (int i = 0; i < arr.size(); ++i) {
        cout<<arr[i]<<" "<<freq[arr[i]]<<endl;
    }
    if(arr.size()==1){
        return min(freq[arr[0]],arr[0]);
    }
    arr[0]=1;
    int mx=1;
    for (int i = 1; i < arr.size(); ++i) {
        if(freq[arr[i]]>=abs(arr[i]-mx)){
            mx=arr[i];
        }
        else{
            mx=max(mx,mx+freq[arr[i]]);

        }
    }
    return mx;
}



};