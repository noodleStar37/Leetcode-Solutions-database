class Solution {
public:
    int binaryGap(int n) {
        int res=0;
        int s=0,i=0;
        while(n){
            if(n&1){
                s=i;break;
            }
            i++;
            n=n>>1;
        }
        while(n){
            if(n&1){
                res=max(res,(i-s));
                s=i;
            }
            i++;
            n=n>>1;
        }
        return res;
    }
};
