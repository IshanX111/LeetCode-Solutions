class Solution {
public:
    static bool sortBySec(pair<int,int>&a,pair<int,int>&b){
        return a.second>b.second;
    }
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        vector<pair<int,int>>vp;
        int x=-1111;
        int res=-1;
        for(auto itr:mp){
            vp.push_back({itr.first,itr.second});
            if(itr.second>x){
                x=itr.second;
            }
        }
        sort(vp.begin(),vp.end(),sortBySec);
        for(auto itr:mp){
            if(itr.second==x){
                res=itr.first;
                break;
            }
        }
        //cout<<x<<endl;
        if(mp.size()==0){
            return -1;
        }
        else{
            return res;
        }
    }
};
