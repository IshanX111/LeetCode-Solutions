class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]>='0' && operations[i][0]<='9'){
                int temp=stoi(operations[i]);
                st.push(temp);
            }
            else if(operations[i][0]=='-'){
                string tt=operations[i].substr(1,operations[i].size()-1);
                int temp=stoi(tt);
                st.push(temp*-1);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int temp1=st.top();
                st.push(temp1*2);
            }
            else if(operations[i]=="+"){
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.pop();
                int temp3=temp1+temp2;
                st.push(temp2);
                st.push(temp1);
                st.push(temp3);

            }
        }

        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
