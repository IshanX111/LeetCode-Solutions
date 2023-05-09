class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>score1;
        score1=score;
        sort(score.begin(),score.end(),greater<int>());
        map<int,string>mp;
        int j=4;
        for(int i=0;i<score.size();i++){
            if(i==0){
                mp[score[i]]="Gold Medal";
            }
            else if(i==1){
                mp[score[i]]="Silver Medal";
            }

            else if(i==2){
                mp[score[i]]="Bronze Medal";
            }
            else{
                string ss= to_string(j);
                j++;
                mp[score[i]]=ss;
            }
        }
        vector<string>v;
        for(int i=0;i<score1.size();i++){
            v.push_back(mp[score1[i]]);
        }
        return v;
    }
};
