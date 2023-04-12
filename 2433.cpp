class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int si=pref.size();
        vector<int>v(si);
        v[0]=pref[0];
        int res=v[0];
        vector<int>ff;
        ff.push_back(res);
        for(int i=1;i<pref.size();i++){
            v[i]=pref[i]^res;

            res=res^v[i];

        }
        return v;
    }
};
