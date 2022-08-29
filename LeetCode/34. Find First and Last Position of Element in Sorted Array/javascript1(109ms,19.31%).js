/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    const idx = nums.indexOf(target);
        const res  = [-1, -1];

        if(idx == -1) return res;
        
        for(let i = idx; i >=0; i--) {
                if(nums[i] == target) {
                        res[0] = i;
                }
        }

        for(let i = idx; i < nums.length; i++) {
                if(nums[i] == target) {
                        res[1] = i;
                }
        }

        return res;
};
