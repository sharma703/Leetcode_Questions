class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < n; i++){
            int m = nums[i];
            while(m){
                int ldigit = m % 10;
                sum += ldigit;
                m = m / 10;
            }
            if(sum == i) return i;
            else sum = 0;
        }
        return -1;
    }
};