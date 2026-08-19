class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int left = 0; 
        int white = 0;
        int ans = k;
        for(int i = 0; i < n; i++){
            if(blocks[i] == 'W'){
                white++;
            }
            if(i - left + 1 > k){
                if(blocks[left] == 'W')
                    white--;
                left++;
            }
            if(i - left + 1 == k){
                ans = min(ans, white);
            }
        }
        return ans;
    }
};