class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]*nums[i]);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
///or it can be used like two pointer
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        if(nums.size() == 0)
            return nums;

        int s = 0, e = nums.size() - 1;
        vector<int> res;
        while(s <= e)
        {
            int leftVal = nums[s]*nums[s];
            int rightVal = nums[e]*nums[e];

            if(leftVal > rightVal)
            {
                res.push_back(leftVal);
                s++;
            }
            else
            {
                res.push_back(rightVal);
                e--;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
