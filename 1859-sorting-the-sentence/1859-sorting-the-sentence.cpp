class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();

        vector<string> ans(10);
        string temp; 
        int cnt = 0, ind = 0;

        while(ind < n){
            if(s[ind] == ' '){
                int pos = temp[temp.size()-1] - '0';

                temp.pop_back();
                ans[pos] = temp;

                temp.clear();
                cnt++;
                ind++;
            }
            else{
                temp += s[ind];
                ind++;
            }   
        }
        int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;

            temp.clear();
            cnt++;
        for(int i = 1; i <= cnt; i++){
            temp += ans[i];
            temp += ' ';
        }
        temp.pop_back();
        return temp;
    }
};