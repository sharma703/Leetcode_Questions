class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int m = n;
        while(m > 0){
            int last = m % 10;
            sum += last;
            product *= last;
            m = m/10;
        }
        int d = sum + product;
        if(n % d == 0){
            return true;
        }
        else{
            return false;
        }
    }
};