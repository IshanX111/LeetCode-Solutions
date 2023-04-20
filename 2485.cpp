class Solution {
public:
    int pivotInteger(int n) {
        int sum1=0;
        int sum2=0;
        int store=-1;
        int pref[n];
        pref[0]=1;
        int suff[n];
        suff[n-1]=n;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+(i+1);
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+(i+1);
        }
        for(int i=0,j=n-1;i<=n,j>=0;i++,j--){
            if(pref[i]==suff[i]){
                store=i+1;
                break;
            }
        }
        return store;
    }
};
