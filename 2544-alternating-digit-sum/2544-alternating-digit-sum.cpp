class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int a = 0;
        int cnt = 0;
        int m = n;
        while(m){
            m /= 10;
            cnt++;
        }
        if(cnt %2 == 0){
            a = 1;
        }
        else{
            a = 0;
        }
        while(n){
            if(a == 0){
                int b = n % 10;
                sum += b;
                n /= 10;
                a = 1;
            }
            if(a!=0){
                int c = n % 10;
                sum -= c;
                n /= 10;
                a = 0;
            }
            
        }
        return sum;
    }
};