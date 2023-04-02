class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mth=0;
        int msf=INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            mth=mth+nums[i];
            if(nums[i]>mth){
                mth=nums[i];
            }
            if(mth>msf)
            {
                msf=mth;
            }
        }
        return msf;

    }
};
