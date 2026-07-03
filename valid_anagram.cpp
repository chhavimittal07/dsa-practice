class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> seen;
        unordered_map<char,int> mp;
        for(char ch:s){
            seen[ch]++;
        }
        for(char c:t){
            mp[c]++;
        }
        if(seen==mp){
            return true;
        }
        else{
            return false;
        }
        
    }
};