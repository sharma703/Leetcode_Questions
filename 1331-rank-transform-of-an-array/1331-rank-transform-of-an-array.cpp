class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        map<int, int> mp;
        int rank = 1;

        for(int x : temp){
            if(mp.count(x) == 0){
                mp[x] = rank++;
            }
        }
        for(int i=0; i<n; i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};