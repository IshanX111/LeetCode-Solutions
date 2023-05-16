class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int store=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                store=i;
                break;
            }
        }
        return store;
    }
};
