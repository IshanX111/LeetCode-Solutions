class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        int c=0;
        while(c!=k){
            int x=pq.top();
            int xx=sqrt(x);
            pq.pop();
            pq.push(xx);
            c++;
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
