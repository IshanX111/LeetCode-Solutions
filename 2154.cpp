class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        while(1){
            int x=binary_search(nums.begin(),nums.end(),original);
            if(x==1){
                original=original*2;
            }
            else{
                break;
            }
        }
        return original;
    }
};
