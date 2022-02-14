class Solution {
public:
    unsigned char array[27];
        void initArray() {
                for(int i=0; i<=26; i++) {
                        array[i] = 0;
                }
        }
    
    int firstUniqChar(string s) {
         initArray();
                for(int i=0; i < s.length(); i++) {
                        if (array[s[i] - 97] < 2){
                                array[s[i] - 97]++;
                        }
                }


        int idx = -1;
        for(int i=0; i<s.length(); i++) {
                if(array[s[i] - 97] == 1) {
                        return i;
                }
        }

        return idx;
    }
};
