class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int c=1;
        int store=0;
        for(auto itr:nums){
           // cout<<itr<<endl;
            if(c==k){
                store= itr;
                break;
            }
            c++;
        }
        return store;
    }
};
