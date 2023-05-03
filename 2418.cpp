class Solution {
public:
    static bool sortBySec(pair<string,int>&a,pair<string,int>&b){
        return a.second>b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>vp;
        for(int i=0;i<names.size();i++){
            vp.push_back({names[i],heights[i]});
        }
        sort(vp.begin(),vp.end(),sortBySec);

        vector<string>v;
        for(auto itr:vp){
            v.push_back(itr.first);

        }
        return v;
    }
};
