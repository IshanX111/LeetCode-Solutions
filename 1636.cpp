class Solution {
public:
    static bool sortBysec(pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second || (a.second==b.second && a.first>b.first);
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>vp;
        for(auto itr:mp){
            vp.push_back({itr.first,itr.second});
        }
        sort(vp.begin(),vp.end(),sortBysec);
        vector<int>vv;
        for(auto itr:vp){
            while(itr.second>1){
                itr.second--;
                vv.push_back(itr.first);
            }
            vv.push_back(itr.first);
        }
        return vv;
    }
};
