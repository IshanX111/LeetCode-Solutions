class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        if(flowerbed.size()==1 && flowerbed[0]==0 && n<=1){
            return true;
        }
        if(flowerbed.size()>=2){
            if(flowerbed[0]==0 && flowerbed[1]==0){
                flowerbed[0]=1;
                c++;
            }

        }

        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                c++;
            }
        }

        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
            flowerbed[flowerbed.size()-1]=1;
            c++;
        }

        if(c>=n){
            return true;
        }
        else{
            return false;
        }
    }
};
