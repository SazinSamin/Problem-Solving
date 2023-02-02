/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
        const hash = [];
        for(let num of nums) hash.push(num);
        let compliment;
        let res = [];
        for(let i = 0; i < nums.length; i++) {
                compliment = target - nums[i];
                if (hash.indexOf(compliment) >= 0 && hash.indexOf(compliment) != i) {
                                res.push(i);
                                res.push(hash.indexOf(compliment));
                                break;
                }
        }
        return res;
};
