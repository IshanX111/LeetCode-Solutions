class Solution {
public:
    static bool cmp(pair<char,int> &a,pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        string ss="";

        map<char,int>mp,mp1;
        vector<pair<char,int> >vp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto itr:mp){
            vp.push_back({itr.first,itr.second});
        }
        sort(vp.begin(),vp.end(),cmp);
        priority_queue<pair<int,char>,vector<pair<int,char>>,greater<pair<int ,char> > >pq;

        for(auto itr:vp){
            mp1[itr.first]=itr.second;
        }
        for(int i=0;i<s.size();i++){
            int x=mp1[s[i]];
            pq.push({x,s[i]});
        }

        while(!pq.empty()){
            pair<int,char>ppp=pq.top();
            ss+=ppp.second;
            pq.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
    }
};
