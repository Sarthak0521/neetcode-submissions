class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(256,0);
        if(s.size() != t.size())

        return false;
        for(char c:s){
            freq[c]++;
        }
        for(char c:t){
            freq[c]--;
        }
        for(int count:freq){
            if(count != 0)
            return false;
        }
        return true;
    }
};
