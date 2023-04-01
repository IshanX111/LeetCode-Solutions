class Solution {
public:

    int dSum(int n){
        int res=0;
        while(n>0){
            res+=n%10;
            n/=10;
        }
        return res;
    }


    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            sum2+=dSum(nums[i]);
        }
        return abs(sum1-sum2);
    }
};
