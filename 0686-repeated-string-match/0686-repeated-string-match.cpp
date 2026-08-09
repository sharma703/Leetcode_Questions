class Solution {
public:

    void FIND_LPS(vector<int> &lps, string s){
        int pre = 0, suff = 1;
        while(suff < s.size()){
            if(s[pre] == s[suff]){
                lps[suff] = pre + 1;
                pre++;
                suff++;
            }
            else{
                if(pre == 0){
                    lps[suff] = 0;
                    suff++;
                }
                else{
                    pre = lps[pre - 1];
                }
            }
        }
    }

    int KMP_MATCH(string h, string n){
        vector<int>lps(n.size());
        FIND_LPS(lps, n);

        int first = 0, sec = 0;
        while(first < h.size() && sec < n.size()){
            if(h[first] == n[sec]){
                first++;
                sec++;
            }
            else{
                if(sec == 0){
                    first++;
                }
                else{
                    sec = lps[sec - 1];
                }
            }
            
        }
        if(sec == n.size()){
                return 1;
            }
        return 0;
    }

    int repeatedStringMatch(string a, string b) {
        if(a == b) return 1;

        string temp = a;
        int rep = 1;
        while(temp.size() < b.size()){
            temp += a;
            rep++;
        }
        if(KMP_MATCH(temp, b) == 1) return rep;

        if(KMP_MATCH(temp + a, b) == 1) return rep + 1;

        return -1;
    }
};