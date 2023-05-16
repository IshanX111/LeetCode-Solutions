class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int cnt=0;
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
            cnt++;

        }
        return cnt;

    }
};
