// read alphabet one by one and push to the set if the alphabet is not inserted yet. Also count the length from the consecutive
// to find out max long substring.
// if a alphabet already present in the set. Clear the set and start the loop from the next alphabet of the previous alphabet
// from where we start.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        unordered_set<char> container;
        int max  = 0;
        int curr = 0;
        int idx = 0;
        for(int i = 0; i < s.size(); i++) {
            char x = s[i];
            if(container.empty()) idx = i;
            if(container.find(s[i]) == container.end() || container.empty()) {
                    container.insert(s[i]);
                    curr++;
                    if(curr > max) {
                            max = curr;
                }
             } else {
                     curr = 0;
                     container.clear();
                     // start after the position we start in previous matching
                     i = idx + 1;
                     idx = i;
                     container.insert(s[i]); 
                     curr++;
             }
        }
        return max;
    }
};
