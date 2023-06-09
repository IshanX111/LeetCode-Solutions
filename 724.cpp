class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        vector<int>pre(nums.size());

        vector<int>suff(nums.size());

        pre[0]=0;
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i-1];
        }
        suff[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--){
            suff[i]=suff[i+1]+nums[i+1];
        }

        int store=-1;
        for(int i=0;i<nums.size();i++){

            if(pre[i]==suff[i]){

                store=i;
                break;
            }
        }
        return store;

    }
};
