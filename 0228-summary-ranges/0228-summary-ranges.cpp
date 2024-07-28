class Solution {
public:
vector<string> summaryRanges(vector<int>& v) {
    if(v.empty())
        return vector<string>();
    int first = 0, last = 0;
    vector<string>ans;
    string cur = "";
    for (int i = 0; i < v.size()-1; ++i) {
        if(v[i+1] == v[i]+1){
            last = i+1;
        }
        else{
            if(last == first){
                ans.push_back(to_string(v[last]));
            }
            else{
                ans.push_back(to_string(v[first])+"->"+to_string(v[last]));

            }
            last = first = i+1;
        }
    }
    if(last == first){
        ans.push_back(to_string(v[last]));
    }
    else{
        ans.push_back(to_string(v[first])+"->"+to_string(v[last]));

    }

    return ans;

}

};