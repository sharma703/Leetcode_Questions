class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorr = (x ^ y);
        int cnt = 0;
        while(xorr > 0){
            int andd = (xorr & 1);
            if(andd != 0){
                cnt++;
                xorr = xorr>>1;
            } 
            else{
                xorr >>= 1;
            }
        }
        return cnt;
    }
};