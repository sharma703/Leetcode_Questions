class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> temp = heights;
        sort(temp.begin(), temp.end());
        int cnt = 0;

        int i = 0;
        while(i < n){
            if(heights[i] != temp[i]){
                cnt++;
                i++;
            }
            else{
                i++;
            }
        }
        return cnt;
    }
};