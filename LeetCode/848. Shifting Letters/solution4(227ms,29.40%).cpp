    class Solution {
    public:
        string shiftingLetters(string s, vector<int>& shifts) {
            long long int shiftAmount = 0;
            for(int i = shifts.size() - 1; i >= 0; i--) {
                shiftAmount +=  shifts[i];
                s[i] = (((s[i] - 97) + shiftAmount ) % 26 ) + 97;
            }   
          return s;
        }
    };
