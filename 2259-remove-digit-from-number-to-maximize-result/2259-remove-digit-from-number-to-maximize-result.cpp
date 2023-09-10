class Solution {
public:
   string removeDigit(string number, char digit) {
    string ans="";
    bool ok=false;
    for(int i=0;i<number.size();i++){
        if(number[i]==digit&&!ok){

            if(number[i+1]>number[i]){
                ok=true;
                continue;
            }
        }
        ans+=number[i];
    }
    if(!ok){
        ans="";
        for(int i=number.size()-1;i>=0;i--){
            if(number[i]==digit&&!ok){
                ok= true;
                continue;
            }
            ans+=number[i];
        }
        reverse(ans.begin(),ans.end());
    }

       
    return ans;

}

};