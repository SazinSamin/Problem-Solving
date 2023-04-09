class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(auto i : nums) s.insert(i);
        int count = 0;
        int max = 0;
        for(auto i : nums) {
                if(s.find(i - 1) == s.end()) {
                        while(s.find(i++) != s.end()) {
                                count++;
                        }
                        if(count > max) {
                                max = count;
                        }
                        count = 0;
                }
        }
        return max;
    }
};
