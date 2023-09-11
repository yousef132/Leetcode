class Solution {
public:
   vector<string> findRepeatedDnaSequences(string s) {
    vector<string >v;
    if(s.size()<=10){
        return v;
    }
  
    int l,r;
    map<string ,int >mp;
    string tmp="";
    for (int i = 0; i < 10; ++i) {
        tmp+=s[i];
    }
    mp[tmp]++;
     l=1,r=10;
    while(r<s.size()){
       // cout<<tmp<<endl;
        auto it=tmp.begin();
        tmp.erase(it);
        tmp+=s[r];
        mp[tmp]++;
        l++,r++;

    }
       
    for(auto i:mp){
        if(i.second>=2){
            v.push_back(i.first);
        }
    }
    return v;
}
};