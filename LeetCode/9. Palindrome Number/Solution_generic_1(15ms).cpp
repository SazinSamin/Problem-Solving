class Solution {
public:
    // first filter out only alphanumeric character.
    string onlyAlphanumeric (string s) {
            string alphanumeric = "";
                for(int i = 0; i < s.length(); i++) {
                        if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <=90) || (s[i] >= 97 && s[i] <= 122)) {
                                alphanumeric += s[i];
                }
        }
        return alphanumeric;
    }

   // turn all case to only lower cases character
   string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++) {
                if(s[i] >= 65 && s[i] <= 90) {
                        s[i] = s[i] + 32;
                }
        }
        return s;
   }

  
   // here we use stack for out solution
   // stack work as LIFO structure 
   // We pushes half of the element in stack, then one by one pop out and one by one compare them with other half elements.
 
   bool checkPalindrome(string s) {
        int len = s.length();
        stack<char> s1;
        bool res;
        
        // if string length is even, then push half, compare with other half.
        if(len % 2 == 0) {
                int half = len / 2;
                for(int i = 0; i < half; i++) {
                        s1.push(s[i]);
                }
                for(int i =  half; i < len; i++) {
                        if((s1.top()) != s[i]) {
                                return false;
                        } else {
                                s1.pop();
                        }
                }
        // if odd then, then skip the middle element, push just before the middle element, and compare just after the middle
        // element.  
        } else {
                int half = floor(len / 2);
                for(int i = 0; i < half; i++) {
                        s1.push(s[i]);
                }
                for(int i = half + 1; i < len; i++) {
                        if((s1.top()) != s[i]) {
                                return false;
                        } else {
                                s1.pop();
                        }
                }
        }

        return true;
   }

    bool isPalindrome(string s) {
        string alphanumic = onlyAlphanumeric(s);
        string lowerCase = toLowerCase(alphanumic);
        return checkPalindrome(lowerCase);
    }
};
