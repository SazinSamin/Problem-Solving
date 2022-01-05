class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)     {
        int size1 = nums1.size(), size2 = nums2.size();
        vector<int> res;
        vector<int>::iterator it;
        for(int i=0; i < size2; i++) {
                it = find(nums1.begin(), nums1.end(), nums2[i]);
                if(it != nums1.end()) {
                        res.push_back(*it);
                        nums1.erase(it);
                }
        }
        return res;
    }
};
