/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */

function remove(arr, val) {
        let size = arr.length;
        for (let i = 0; i < size; i++) {
                if (val == arr[i]) {
                        return i;
                }
        }
}



var intersect = function(nums1, nums2) {
     let size = nums2.length;
        const res = [];
        for(let i =0; i < size; i++) {
                let f = nums1.find((val)=> {
                        let findRes =  val == nums2[i];
                        return findRes;
                });
                // (f) ? console.log(nums2[i]) : "";
                if(f != undefined) {
                        res.push(f);
                        nums1.splice(remove(nums1, f), 1);
                }
        }
        return res;
};
