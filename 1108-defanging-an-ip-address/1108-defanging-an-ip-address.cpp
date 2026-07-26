class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string ans;
        int ind = 0;
        while(ind < n){
            if(address[ind] == '.'){
                ans += "[.]";
            }
            else{
                ans += address[ind];
            }
            ind++;
        }
        return ans;
    }
};