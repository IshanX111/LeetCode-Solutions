class Solution {
public:
    int fillCups(vector<int>& amount) {

        priority_queue<int>pq;
        for(int i=0;i<amount.size();i++){
            if(amount[i]==0){
                continue;
            }
            pq.push(amount[i]);
        }
        int c=0;
        while(pq.size()>=2){
            int temp1=pq.top();
            temp1=temp1-1;
            pq.pop();
            int temp2=pq.top();
            temp2=temp2-1;
            pq.pop();
            if(temp1!=0){
                pq.push(temp1);
            }

            if(temp2!=0){
                pq.push(temp2);
            }
            c++;

        }
        int temp=0;
        if(pq.size()==0){
            temp=0;
        }
        else{
            temp=pq.top();
        }
        return c+temp;



    }
};
