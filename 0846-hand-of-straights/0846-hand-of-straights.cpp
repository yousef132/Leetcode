class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
    if(hand.size()%groupSize != 0)
        return false ;

    int groups = hand.size()/groupSize;
    map<int,int>mp;
    for (int i = 0; i < hand.size(); ++i) {
        mp[hand[i]]++;
    }
    while(groups>0){
        int mn = mp.begin()->first;

        for (int i = 0; i < groupSize; ++i) {
            mp[mn]--;
            if(mp[mn]==0)
                mp.erase(mn);
            mn+=1;
            if(mp.find(mn) == mp.end() && i <groupSize-1)
                return false;
        }
        groups--;

    }
    return true;
}
};