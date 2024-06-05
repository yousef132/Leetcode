class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    map<int,int>m1 , m2;
    for (int i = 0; i < nums1.size(); ++i) {
        m1[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); ++i) {
        m2[nums2[i]]++;
    }
    vector<int> ans ;

    for(auto it1 : m1){
        int f = it1.second; 
        int s = m2[it1.first]; 

        for (int i = 0; i < min(s,f); ++i) {
            ans.push_back(it1.first);
        }
    }
    return ans ;
}
};