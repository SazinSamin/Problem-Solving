class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(int i = 0; i < nums1.size(); i++) {
            s.insert(nums1[i]);
        }
        set<int> res;
        for(int i = 0; i < nums2.size(); i++) {
            if(s.find(nums2[i]) != s.end()) {
                res.insert(nums2[i]);
            }
        }
        vector<int> final;
        for(auto it = res.begin(); it != res.end(); it++) {
            final.push_back(*it);
        }
        return final;
    }
};
