class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>v;
        char ch1=s[0];
        int temp1=s[1]-48;
        char ch2=s[3];
        int temp2=s[4]-48;
        for(char i=ch1;i<=ch2;i++){
            for(int j=temp1;j<=temp2;j++){
                string xx=i+to_string(j);
                cout<<xx<<endl;
                v.push_back(xx);
            }
        }
        return v;
    }
};
