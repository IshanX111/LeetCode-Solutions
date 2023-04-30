class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        set<int>se;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int c=0;
        for(auto itr: mp){
            se.insert(itr.second);
        }
        if(se.size()==1){
            return true;
        }
        else{
            return false;
        }
    }
};
