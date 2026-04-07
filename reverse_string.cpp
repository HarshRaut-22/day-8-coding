class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> rs(s.size());
        for(int i=0; i<s.size(); i++){
            rs[i] = s[i];
        }
        for(int i=0; i<s.size(); i++){
            s[i] = rs[s.size()-1-i];
        }
    }
};
