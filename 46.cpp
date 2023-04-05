class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> >vv;
        sort(nums.begin(),nums.end());
        do{
            vector<int>v;
            for(int i=0;i<nums.size();i++){
                v.push_back(nums[i]);
            }
            vv.push_back(v);
        }while(next_permutation(nums.begin(),nums.end()));
        return vv;
    }
};
///backtracking should be followed
