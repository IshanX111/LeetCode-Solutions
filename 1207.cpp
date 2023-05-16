class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        set<int>s2;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){

            mp[arr[i]]++;
        }

        for(auto itr:mp){
            s2.insert(itr.second);
        }
        if(mp.size()!=s2.size()){
            return false;
        }
        else{
            return true;
        }
    }
};
