class Solution {
public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b)
    {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>v;
        vector<pair<int,int> >vp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto itr:mp){
            vp.push_back(itr);
        }

        sort(vp.begin(),vp.end(),cmp);

        int c=1;
        for(auto itr:vp){
            v.push_back(itr.first);
            c++;
            if(c>k){
                break;
            }
        }


        return v;
    }
};
