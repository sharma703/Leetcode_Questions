class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int low = 0;
        int high = k - 1;
        int cnt1 = 0;
        for(int i  = low; i <= high; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt1++;
            }
        }
        int cnt2 = cnt1;
        while(high < n){
            if(s[low] == 'a' || s[low] == 'e' || s[low] == 'i' || s[low] == 'o' || s[low] == 'u'){
                cnt1--;
            }
            low++, high++;
            if(s[high] == 'a' || s[high] == 'e' || s[high] == 'i' || s[high] == 'o' || s[high]  == 'u'){
                cnt1++;
            }
            cnt2 = max(cnt1, cnt2);
        }
        return cnt2;
    }
};