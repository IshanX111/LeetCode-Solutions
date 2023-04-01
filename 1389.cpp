class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

        vector<int>v;
        int si=index.size();
        for(int i=0;i<si;i++){
            v.insert(v.begin()+index[i],nums[i]);
        }
        return v;
    }
};
