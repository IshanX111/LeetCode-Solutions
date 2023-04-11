class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int> >vp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(),vp.end());
        for(int i=0,j=vp.size()-1;i<j;){
            if(vp[i].first+vp[j].first==target){
                v.push_back(vp[i].second+1);
                v.push_back(vp[j].second+1);
                break;
            }
            if((vp[i].first+vp[j].first)<target){
                i++;
            }
            else{
                j--;
            }
        }
        sort(v.begin(),v.end());
        return v;

    }
};
