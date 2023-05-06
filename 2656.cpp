class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x=*max_element(nums.begin(),nums.end());
        int temp1=((x)*(x-1))/2;
        int temp2=((x+k)*(x+k-1))/2;
        return temp2-temp1;
    }
};
