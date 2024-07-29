class Solution {
public:
   int maxRepeating(string sequence, string word) {
   string s = word;
        int n = sequence.length();
        int k = 0;

        for(int i=1; i<=n; i++){
            if(sequence.find(s) != string::npos){
                k = i;
                s += word;
            } else {
                break;
            }
        }

        return k;
    }


};