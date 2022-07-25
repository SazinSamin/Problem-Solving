/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
      const resArr = [...nums1, ...nums2];
      
      resArr.sort(function(a, b) {
        return a - b;
      })

      const mid = resArr.length / 2;
      let res;
      if (resArr.length == 1) {
        return resArr[0];
      }
      if (resArr.length == 2) {
        return (resArr[0] + resArr[1]) / 2;
      }
      if (resArr.length % 2 == 0) {
        res = (resArr[mid] + resArr[mid - 1]) / 2;
      } else {
        res = resArr[mid - 0.5];
      }
    return res;
};
