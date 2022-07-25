class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto it = nums2.begin(); it != nums2.end(); it++) {
                    nums1.push_back(*it);
            }

            sort(nums1.begin(), nums1.end());

            int firstSize = nums1.size();
            double half = firstSize / 2;
            double res;
            if(firstSize % 2 == 0) {
                res = double(nums1[half] + nums1[half - 1]) / 2;
            } else {
                res = nums1[round(half)];
            }

            return res;
    }
};
