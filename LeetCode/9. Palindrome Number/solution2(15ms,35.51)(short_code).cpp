class Solution {
public:
   bool isPalindrome(string s) {
        for(int i = 0, j = s.size() - 1; i < j; i++, j--) {       // increasing two pointer concurrently
                while(isalnum(s[i]) == false && i < j) i++;       // if not-alphanumeric then skip that character from forward.
                while(isalnum(s[j]) == false && i < j) j--;       // if not-alphanumeric then skip that character from backword.
                if (tolower(s[i]) != tolower(s[j])) return false; // if two character doesn't match return false immediately.
        }
        return true;
   }
};
