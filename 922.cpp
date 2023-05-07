class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        for(int i=0,j=nums.size()-1,k=nums.size()-1;i<j && i<k ;i++){
            if((i%2==0 && nums[i]%2==0) ||(i%2!=0 && nums[i]%2!=0)){
                continue;
            }
            if(nums[i]%2==0 && i%2!=0){
                int last_pointer=j;
                while(i<j){
                    if(nums[j]%2!=0 && j%2==0){
                        last_pointer=j;
                        break;
                    }
                    j--;
                }
                swap(nums[i],nums[last_pointer]);
            }
            else if(nums[i]%2!=0 && i%2==0){

                int last_pointer=k;
                while(i<k){
                    if(nums[k]%2==0 && k%2!=0){
                        last_pointer=k;
                        break;
                    }
                    k--;

                }
                swap(nums[i],nums[last_pointer]);


            }

        }
        return nums;
    }
};
