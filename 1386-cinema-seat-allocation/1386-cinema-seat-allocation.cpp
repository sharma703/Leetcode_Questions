class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int, set<int>> mp;

        for(auto &x : reservedSeats){
            mp[x[0]].insert(x[1]);
        }
        int ans = (n - mp.size()) * 2;

        for(auto &row : mp){
            set<int> st = row.second;

            bool left = true;
            bool middle = true;
            bool right = true;

            for(int i  = 2; i <= 5; i++){
                if(st.count(i))
                left = false;
            }
            for(int i = 4; i <= 7; i++){
                if(st.count(i)) 
                middle = false;
            }
            for(int i = 6; i <= 9; i++){
                if(st.count(i))
                right = false;
            }
            if(left && right){
                ans += 2;
            }
            else if(left || middle || right){
                ans += 1;
            }
        }
    return ans;
    }
};