class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        priority_queue< pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;

        for(int i=0;i<mat.size();i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            pq.push({c,i});

        }
        int k1=k;
        vector<int>v;
        while(k1--){
            pair<int,int>p;
            p=pq.top();
            v.push_back(p.second);
            pq.pop();
        }
        return v;

    }
};
