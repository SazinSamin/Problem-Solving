/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */


var intersect = function (nums1, nums2) {
        const res = [];
        nums1.forEach((val) => {
                if(nums2.includes(val)) {
                        res.push(val);
                        nums2.splice(nums1.indexOf(val));
                }
        })
        return res;
};



// const array = [4, 9, 5];
// const arr = [9, 4, 9, 8, 4];
const v1 = [1, 2, 2, 1];
const v2 = [2, 2];
const resArr = intersect(v1, v2);
resArr.forEach((val) => {
        console.log(val);
});
