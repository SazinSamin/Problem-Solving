class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int i = 0;
        int j = s.size() - 1;
        while(i < j) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++; j--;
        }
    }
};
