class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int cnt=0;
        int cnt1=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                c1++;
            }
            else if(s[i]=='1'){
                c2++;
            }
            if((s[i]=='1'&&s[i+1]=='0' )||i+1==s.size()){
                cnt1=min(c1,c2);
                cnt1=cnt1*2;
                //cout<<cnt1<<endl;
                cnt=max(cnt,cnt1);
                //cout<<cnt<<endl;
                c1=0;
                c2=0;
            }


        }
        return cnt;
    }
};
