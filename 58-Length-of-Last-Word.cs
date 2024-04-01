public class Solution {
    public int LengthOfLastWord(string s) {
        int l=-1 , r = -1;
        //adfasdf..
        for(int i = s.Length-1;i>=0;i-- ){
            if(s[i]!=' '){
                if(r==-1){
                    r=i;
                }
            }
            else{
                if(r!=-1){
                    l=i+1;
                    break;
                }
            }
        }

        if(r==-1)return 0;
        if(l==-1) return r-(-1);
        return r-l+1;
    }
}