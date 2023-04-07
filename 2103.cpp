class Solution {
public:
    int countPoints(string rings) {
        map<int,set<char>>mp;
        for(int i=1;i<rings.size();i=i+2){

            mp[rings[i]].insert(rings[i-1]);
            //cout<<mp[rings[i]]<<endl;
        }
        int c=0;
        for(auto itr:mp){
            if(itr.second.size()==3){
                c++;
            }
            //cout<<itr.second.size()<<" ";
        }
        //cout<<endl;
        return c;
    }
};
