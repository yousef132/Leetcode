class Solution {
public:
bool buddyStrings(string s, string goal) {
    if(s.size()!=goal.size()){
        return false ;
    }
     map<char,int>m1,m2;
    
     for (int i = 0; i < s.size(); ++i) {
         m1[s[i]]++;
         m2[goal[i]]++;
     }
     if(s==goal){
         for(char ch='a';ch<='z';ch++){
             if(m1[ch]>1 &&m2[ch]>1){
                 return true;
             }
         }
         return false ;
     }
     int cnt{};
     string f{},se{};
     for (int i = 0; i < s.size(); ++i) {
         if(s[i]!=goal[i]){
             cnt++;
             f+=s[i];
             se+=goal[i];
         }
     }

     if(cnt!=2){
         return false;
     }
     sort(f.begin(),f.end()),sort(se.begin(),se.end());
     if(f!=se){
         return false;
     }
     return true;


 }
};