class Solution {
    private :
    string removeLeadingZeros(const std::string& str) {
    // Find the position of the first non-zero character
    size_t nonZeroPos = str.find_first_not_of('0');

    // If all characters are zero or the string is empty, return "0"
    if (nonZeroPos == std::string::npos) {
        return "0";
    }

    // Return the substring starting from the first non-zero character
    return str.substr(nonZeroPos);
}
public:
int numDifferentIntegers(string s) {
    set<string>st;
    string tmp ="";
    for (int i = 0; i < s.size(); ++i) {
        if(isdigit(s[i])){
            tmp+=s[i];
        }
        else{
            if(!tmp.empty()){

                st.insert(removeLeadingZeros(tmp));
                tmp ="";
            }
        }
    }
    if(!tmp.empty())
                st.insert(removeLeadingZeros(tmp));

    return st.size();
}


};