class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        map<char, int> mp;
        for(char x : ransomNote){
            mp[x]++;
        }
        for(int i = 0; i < magazine.size(); i++){
            if(mp.find(magazine[i]) != mp.end()){
                mp[magazine[i]]--;
                if(mp[magazine[i]] == 0){
                    mp.erase(magazine[i]);
                }
            }
            if(mp.empty()){
                return true;
            }
        }
        return false;
    }
};