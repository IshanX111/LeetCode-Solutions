class Solution {
public:
    int partitionString(string s) {

        map<char,int>mp;
        set<char>se;
        int c=0;
        for(int i=0;i<s.size();i++){

            se.insert(s[i]);
            if(mp[s[i]]==0){
                mp[s[i]]++;
                continue;
            }
            if(mp[s[i]]>=1){
                c++;
                mp.clear();
                mp[s[i]]++;

            }
        }
        if(se.size()==s.size()){
            return 1;
        }
        else{
            if(mp.size()!=0){
                return c+1;
            }
            else{
                return c;
            }
            }
    }
};
///using bit manipulation
class Solution {
public:
    int partitionString(string s) {
        int i = 0, ans = 1,flag = 0;
        while(i < s.size()){
            int val = s[i] - 'a';
            if( flag & (1<<val) ) {
                flag = 0;
                ans++;
            }
            flag = flag | (1<<val);
            i++;
        }
        return ans;
    }
};
