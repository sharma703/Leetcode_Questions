class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int target = k * threshold;
        int sum = 0;
        int cnt = 0;
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }
        if(sum >= target){
            cnt++;
        }
        for(int i = k; i < n; i++){
            sum = sum - arr[i-k] + arr[i];

            if(sum >= target){
                cnt++;
            }
        }
        return cnt;
    }
};