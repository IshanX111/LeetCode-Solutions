class Solution {
public:
    static bool sortBySec(pair<int,int>&a,pair<int,int>&b){
        return a.second>b.second;
    }
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        vector<pair<int,int>>vp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto itr:mp){
            vp.push_back({itr.first,itr.second});
        }
        sort(vp.begin(),vp.end(),sortBySec);
        int res=0;
        for(int i=0;i<vp.size();i++){
            res+=vp[i].second;
            if(res>=arr.size()/2){
                return i+1;
            }
        }
        return res;
    }
};
