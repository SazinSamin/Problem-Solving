    class Solution {
    public:
        string shiftingLetters(string s, vector<int>& shifts) {
            long long int shiftAmount = shifts[shifts.size() - 1];
            for(int i = shifts.size() - 1; i >= 0; i--) {
                s[i] = (((s[i] - 97) + shiftAmount ) % 26 ) + 97;
                if(i > 0) {
                                    shiftAmount = shiftAmount + shifts[i - 1];

                }
            }   
          return s;
        }
    };
