
class Solution {
public:

    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int c1=0;
        int c2=0;

        for(auto itr:mp){

            if(itr.second%2==0){
                c1+=itr.second/2;
            }
            else{
                c1+=itr.second/2;
                c2+=itr.second%2;
            }
        }

        vector<int>v;
        v.push_back(c1);

        v.push_back(c2);
        return v;
    }
};
