class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=0,j=nums.size()-1;i<j;i++,j--){
            v.push_back(nums[i]+nums[j]);
        }
        sort(v.begin(),v.end());
        int res=v[v.size()-1];
        return res;
    }
};
