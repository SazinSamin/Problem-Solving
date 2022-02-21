class Solution {
public:
    string moreThanThree(string s) {
        char first = s[0];
        if(first >= 97 && first <= 122) {
                s[0] -= 32;
        }
        for(int i = 1; i < s.size(); i++) {
                        char curr = s[i];
                        if(curr >= 65 && curr <=90) {
                                s[i] += 32;
                        }
                }
                return s;
        }

        string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++) {
                char curr = s[i];
                if(curr >=65 && curr <=90) {
                s[i] += 32;
                }}
                return s;
        }



   vector<string> getDiscreate(string title) {
        vector<string> v1;
        string curr = "";
        for(int i = 0; i < title.size(); i++) {
                char c = title[i];
                if(c != ' ') {
                        curr.push_back(c);
                } else {
                        v1.push_back(curr);
                        curr = "";
                }
        }

        v1.push_back(curr);

        return v1;
   }

    string capitalizeTitle(string title) {
        
        vector<string> d1 = getDiscreate(title);
        string res1;        
        for(auto it = d1.begin(); it != d1.end(); it++) {
                int size = (*it).size();
                string curr = (*it);
                if(size < 3) {
                        res1 += toLowerCase(curr);
                } else {
                        res1 += moreThanThree(curr);
                }
                if(it != d1.end() - 1) {
                        res1 += ' ';
                }
        }

        return res1;
    }
};  
