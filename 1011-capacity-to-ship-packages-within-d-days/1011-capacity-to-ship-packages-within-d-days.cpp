class Solution {
public:

    int packages(vector<int>& weights, int cap){
        int n = weights.size();
        int Days = 1, loaded = 0;
        for(int i = 0; i < n; i++){
            if(loaded + weights[i] > cap){
                Days = Days + 1;
                loaded = weights[i];
            }
            else{
                loaded += weights[i];
            }

        }
        return Days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxi = *max_element(weights.begin(), weights.end());
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += weights[i];
        }
        int low = maxi, high = sum;
        while(low <= high){
            int mid = (low + high) / 2;
            int DayReq = packages(weights, mid);
            if(DayReq <= days){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};