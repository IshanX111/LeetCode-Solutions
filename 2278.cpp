class Solution {
public:
    int percentageLetter(string s, char letter) {
        float c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==letter){
                c++;
            }
        }
        float res=float((float)c*100/(float)s.size());
        res=res;
        return (int)res;
    }
};
