class Solution {
public:
    int reverseDegree(string s) {
     int n = s.size();

     int sum = 0;

     for(int i = 0; i < n; i++){
        int value = ('z' - s[i] + 1) * (i+1);

        sum += value;
        }
    return sum;
    }
};