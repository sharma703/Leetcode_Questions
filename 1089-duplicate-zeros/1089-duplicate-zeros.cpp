class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int i = 0;
        int j = 0;
        while(i < n && j < n){
            if(arr[i] == 0){
                ans[j] = 0;
                j++;
                if(j < n) ans[j] = 0;
                j++;
            }else{
                ans[j] = arr[i];
                j++;
            }
            i++;
        }
        for(int k = 0; k < n; k++){
            arr[k] = ans[k];
        }
    }
};