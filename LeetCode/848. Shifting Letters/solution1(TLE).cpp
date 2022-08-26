class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int i = 0; i < s.size(); i++) {
                int r = shifts[i];
                for(int j = 0; j < i + 1; j++) {
                        int x = ((s[j] - 97) + r) % 26;
                        s[j] = x + 97;
                }
        }
        return s;
    }
};
