class Solution {
public:
    bool isAnagram(string s, string t) {
         int arr[123] {0};
        int sLen = s.length();
        for(int i = 0; i < sLen; i++) {
                arr[s[i]]++;
        }

        int tLen = t.length();
        for(int i = 0; i < tLen; i++) {
                if(arr[t[i]] == 0) {
                        return false;
                } else {
                        arr[t[i]]--;
                }
        }

        for(int i = 0; i <= 122; i++) {
                if(arr[i] > 0) {
                        return false;
                }
        }

        return true;
    }
};
