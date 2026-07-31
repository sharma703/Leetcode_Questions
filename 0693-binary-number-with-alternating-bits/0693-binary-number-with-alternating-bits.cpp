class Solution {
public:
    bool hasAlternatingBits(int n) {
        while(n > 0){
            int m = n >> 1;
            if((n & 1) != (m & 1)){
                n = m;
            }
            else{
                return false;
            }
        }
        return true;
    }
};