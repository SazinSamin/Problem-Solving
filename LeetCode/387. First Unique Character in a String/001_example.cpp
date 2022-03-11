class Solution {
public:
    int array[123];
        void initArray() {
            for(int i=0; i<123; i++) array[i] = 0;
    }
    
    int firstUniqChar(string s) {
         initArray();
                for(int i=0; i < s.length(); i++) {
                        array[s[i]]++;
        }

        int idx = -1;
        for(int i=0; i<s.length(); i++) {
                if(array[s[i]] == 1) {
                        return i;
                }
        }

        return idx;
    }
};
