class Solution {
public:
  void f(vector<string> &arr, int idx, int bitmask, int &maxlen){
        if(idx==arr.size()){
            maxlen = max(maxlen,__builtin_popcount(bitmask));
            return;
        }

        bool isValid = true;
        int oldbitmask = bitmask;
        for(auto c:arr[idx]){
            int bit = 1<<(c-'a');
            if(bit & bitmask){
                isValid = false;
                break;
            }
            else{
                bitmask |= (1<<(c-'a'));
            }
        }

        if(isValid)
            f(arr,idx+1,bitmask,maxlen);
        f(arr,idx+1,oldbitmask,maxlen);
    }
    int maxLength(vector<string>& arr) {
        int maxlen = 0;
        f(arr,0,0,maxlen);
        return maxlen;
    }
};