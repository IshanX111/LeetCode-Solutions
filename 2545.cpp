class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,vector<int> >>vp;
        vector<vector<int>>vp1;
        for(int i=0;i<score.size();i++){
            pair<int,vector<int> >p;
            int prior=score[i][k];
            p.first=prior;
            p.second=score[i];
            vp.push_back(make_pair(p.first,p.second));
        }
        sort(vp.begin(),vp.end(),greater<pair<int,vector<int>>>());
        for(int i=0;i<vp.size();i++){
            vector<int>x;
            for(int j=0;j<vp[i].second.size();j++){
                x.push_back(vp[i].second[j]);
            }
            vp1.push_back(x);
            x.clear();
        }
        return vp1;
    }
};
