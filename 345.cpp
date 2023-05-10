class Solution {
public:
    bool isVowel(char ch){
        return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    }
    string reverseVowels(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){

            if(isVowel(s[i])){
                st.push(s[i]);


            }

        }
        for(int i=0;i<s.size();i++){

           if(isVowel(s[i])){
               s[i]=st.top();
               st.pop();
           }

        }
        return s;
    }
};
