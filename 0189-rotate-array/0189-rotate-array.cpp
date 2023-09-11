class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    deque<int>d;
    for (int i = 0; i < nums.size(); ++i) {
        d.push_back(nums[i]);
    }
    while(k--){
        int last=d.back();
        d.pop_back();
        d.push_front(last);
    }
    nums.clear();
    for(auto i :d){
        nums.push_back(i);
    }
      
}
};