class Solution {
public:
bool validMountainArray(vector<int>& arr) {
    if(arr.size()<3){
        return false;
    }
    int cnt{};
    for (int i = 1; i < arr.size()-1; ++i) {
       if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
           cnt++;
       }
       if(arr[i]==arr[i+1]){
           return false;
       }
    }
    if(arr[0]>=arr[1]){
        return false;
    }
    if(arr.back()>=arr[arr.size()-2]){
        return false;
    }
    return (cnt==1);
}
};