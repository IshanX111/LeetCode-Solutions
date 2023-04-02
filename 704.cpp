class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int res1=binary_search(nums.begin(),nums.end(),target);
        if(res1==0){
            return -1;
        }
        else{
            return res;
        }
    }
};
