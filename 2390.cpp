class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string finalString="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            finalString+=st.top();
            st.pop();
        }
        reverse(finalString.begin(),finalString.end());
        return finalString;
    }
};
