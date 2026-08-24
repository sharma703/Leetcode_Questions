class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        int sum = 0;
        vector<int> ans(n);
        if(k == 0){
            return ans;
        }
        if(k > 0){
            for(int i = 1; i <= k; i++){
                sum += code[i % n];
            }
            for(int i = 0; i < n; i++){
                ans[i] = sum;
                
                sum -= code[(i + 1) % n];
                sum += code[(i + k + 1) % n];
            }

        }
        else{
            int window = -k;
            for(int i = 1; i <= window; i++){
                sum += code[(n-i) % n];
            }

            for(int i = 0; i < n; i++){
                ans[i] = sum;

                sum -= code[(i - window + n) % n];
                sum += code[i];
            }
        }

        return ans;
    }
};