class Solution {
public:
    int smallestNumber(int n, int t) {
        int m = n;
        while(m < 2*m){
            int pro = 1;
            n = m;
            while(n>0){
                int l = n % 10;
                pro *= l;
                n = n / 10;
            }
            if(pro % t == 0){
            return m;
            }
            m++;
        }
        
        return 0;
    }
};