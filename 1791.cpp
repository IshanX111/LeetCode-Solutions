class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        cout<<edges.size()<<endl;
        for(int i=0;i<edges.size();i++){
            //cout<<edges[i].size()<<endl;
            for(int j=0;j<edges[i].size();j++){
                int x=edges[i][j];
                mp[x]++;
                //cout<<edges[i][j]<<" ";
            }
            //cout<<endl;


        }
        int mx=-11;
        int res;
        for(auto itr:mp){
            if(itr.second>mx){
                mx=max(mx,itr.second);
                res=itr.first;
            }


                //cout<<itr.first<<" "<<itr.second<<endl;
        }
       return res;
    }
};
