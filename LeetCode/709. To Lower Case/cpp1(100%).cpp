class Solution {
public:
    string toLowerCase(string s) {
        int len = s.length();
        while(len--) {
                if(s[len] <=90 && s[len] >= 65) {
                        s[len] = s[len] + 32;
                }
        }
    return s;
    }
};
