class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool counting = false;
        int i = s.size()-1;
        while(i>=0){
            if(s[i] !=' '){
                counting = true;
                count++;
            }
            else if(counting){
                break;
            }
            i--;
        }
        return count;
    }
};
