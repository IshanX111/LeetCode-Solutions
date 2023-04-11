class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        vector<pair<char,int>>v;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]++;
                v.push_back({s[i],i});
            }
            else{
                mp[s[i]]++;
            }
        }
        int res=-1;
        for(int i=0;i<v.size();i++){
            if(mp[v[i].first]==1){
                res=v[i].second;
                break;
            }
        }
        return res;
    }
};
