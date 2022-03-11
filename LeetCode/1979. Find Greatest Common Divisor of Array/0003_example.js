/**
 * @param {number[]} nums
 * @return {number}
 */
function GCD(max, min) {
    if(min == 0) {
        return max;
    }
    return GCD(min, max % min);
}

var findGCD = function(nums) {
    let max = Math.max(...nums);
    let min = Math.min(...nums);
    return GCD(max, min);
};
