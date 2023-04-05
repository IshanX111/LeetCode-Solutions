class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {

        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                    c++;
                }
            }
        }
        return c;


    }
};
///binary search approach
class Solution {
public:
    int countKDifference(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int count=0;
        for(int i=0; i<a.size()-1; i++){
            int l=lower_bound(a.begin(), a.end(),a[i]+k)-a.begin();
            int r=upper_bound(a.begin(), a.end(),a[i]+k)-a.begin();
            count+=(r-l);
        }
        return count;
    }
};
