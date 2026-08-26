class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int left = 0;
        int cnt = 0;
        string ans = "";

        for(int right = 0; right < n; right++){
            if(s[right] == '1')
                cnt++;

            while(cnt > k){
                if(s[left] == '1')
                    cnt--;
                left++;
            }
            if(cnt == k){
                while(s[left] == '0')
                    left++;
                string current = s.substr(left, right - left + 1);

                if(ans == "" || current.size() < ans.size() || (current.size() == ans.size() && current < ans))
                ans = current;
            }            

        }
        return ans;
    }
};