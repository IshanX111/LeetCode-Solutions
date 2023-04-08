class Solution {
public:
    string replaceDigits(string s) {
        string ss="";
        ss+=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                ss+=s[i];
            }
            else{
                int x=s[i-1]-48+s[i]-48;
                char ch=(char)(x+48);
                //cout<<ch<<endl;
                ss+=ch;

            }
        }
        return ss;
    }
};
