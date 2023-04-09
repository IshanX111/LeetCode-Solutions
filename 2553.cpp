class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            stack<int>st;

            while(x>0){
                st.push(x%10);
                x=x/10;
            }
            while(!st.empty()){
                v.push_back(st.top());
                st.pop();
            }
        }
        return v;
    }
};
