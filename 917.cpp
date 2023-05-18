class Solution {
public:
    string reverseOnlyLetters(string s) {

        for(int i=0,j=s.size()-1;i<j;){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }

            else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')){
                    //swap(s[i],s[j]);
                }
                else{
                    j--;
                }
            }

            else if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')){
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                    //swap(s[i],s[j]);
                }
                else{
                    i++;
                }
            }
            else{
                i++;
                j--;
            }

        }
        return s;
    }
};
