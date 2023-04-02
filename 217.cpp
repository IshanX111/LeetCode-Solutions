class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                c++;
                break;
            }
        }
        if(c==0){
            return false;
        }
        else{
            return true;
        }
    }
};
