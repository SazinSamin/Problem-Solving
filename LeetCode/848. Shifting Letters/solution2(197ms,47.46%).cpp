    class Solution {
    public:
        string shiftingLetters(string s, vector<int>& shifts) {
            long long int suffixSum[shifts.size()];
            int lastIdxv = shifts.size() - 1;
            suffixSum[lastIdxv] = shifts[lastIdxv];

            for(int i = shifts.size() - 2; i >=0; i--) {
               suffixSum[i] = shifts[i] + suffixSum[i + 1];
            }
        
            for(int i = 0; i < shifts.size(); i++) {    
                s[i] = (((s[i] - 97) + suffixSum[i] ) % 26 ) + 97;
             }   
            return s;
        }
    };
