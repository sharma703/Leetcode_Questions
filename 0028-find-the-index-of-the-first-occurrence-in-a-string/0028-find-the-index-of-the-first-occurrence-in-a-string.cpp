class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        vector<int> LPS(m);
        int pre = 0, suff = 1;

        while(suff < m){
            if(needle[pre] == needle[suff]){
                LPS[suff] = pre + 1;
                pre++;
                suff++;
            }
            else{
                if(pre == 0){
                    LPS[suff] = 0;
                    suff++;
                }
                else{
                    pre = LPS[pre - 1];
                }
            }
        }
        int i = 0, j = 0;
        while(i < n){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if( j == m) 
                return i - j;
            }
            else{
                if(j > 0){
                    j = LPS[j - 1];
                }
                else{
                    i++;
                }
            }
        }
        return -1;
    }
};