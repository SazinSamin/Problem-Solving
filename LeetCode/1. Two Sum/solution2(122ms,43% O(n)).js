/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
        let targeNum;
        const hash = [];
        const res = [];
        for(let i = 0; i < nums.length; i++) {
                targeNum = target - nums[i];
                if(hash.indexOf(targeNum) >= 0) {
                        res.push(i);
                        res.push(hash.indexOf(targeNum));
                } else {
                        hash.push(nums[i]);
                }
        }
        return res;
};
