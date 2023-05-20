class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<unsigned long long,vector<int> >,vector<pair<unsigned long long,vector<int> >>,greater<pair<unsigned long long,vector<int> >>>pq;
        vector<vector<int>>fv;
        for(int i=0;i<points.size();i++){
            unsigned long long temp=(points[i][0]*points[i][0]) + (points[i][1]*points[i][1]);
            pq.push(make_pair(temp,points[i]));
        }
        int c=0;
        while(!pq.empty()){
            pair<unsigned long long,vector<int> >pp=pq.top();
            fv.push_back(pp.second);
            pq.pop();
            c++;
            if(c==k){
                break;
            }
        }
        return fv;
    }
};
