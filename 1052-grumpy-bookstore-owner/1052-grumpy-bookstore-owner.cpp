class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int ISum = 0;

        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0){
                ISum += customers[i];
                customers[i] = 0;
            }
        }
        int sum = 0, msum = 0;
        int left = 0, right = 0;

        for(int i = 0; i < minutes; i++){
            sum += customers[i];
        }
        msum = sum;
        for(int right = minutes; right < n; right++){
            sum -= customers[left];
            left++;
            sum += customers[right];

            msum = max(msum, sum);
        }
        int ans = msum + ISum;
        return ans;
    }
};