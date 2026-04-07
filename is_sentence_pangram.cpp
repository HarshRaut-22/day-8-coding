class Solution {
public:
    bool checkIfPangram(string sentence) {
        string s ="abcdefghijklmnopqrstuvwxyz";
        if(sentence.size() < 26){
            return false;
        }
        int alpha=0;
        for(int i=0; i<26; i++){
            int count =0;
            for(int j=0; j<sentence.size(); j++){
                if(s[i] == sentence[j]){
                    count++;
                }
            }
            if(count > 0){
                alpha++;
            }
            if(alpha == 26){
                return true;
            }
        }
        return false;
    }
};
