class Solution {
public:
   string reverseVowels(string s) {
    vector<int>index;

    for (int i = 0; i < s.size(); ++i) {
        char c = tolower(s[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            index.push_back(i);
         }
    }
    for (int i = 0; i < index.size()/2; ++i) {
        swap(s[index[i]],s[index[index.size()-i-1]]);
    }
    return s;
}
};