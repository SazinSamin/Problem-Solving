/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const map = new Map();
        for(let i = 0; i < strs.length; i++) {
                const sort = strs[i].split('').sort().join('');
                if(!map.has(sort)) {
                        map.set(sort, [strs[i]]);
                } else {
                        const key = map.get(sort);
                        key.push(strs[i]);
                }
        }
        const res = [];
        map.forEach((val, key) => res.push(val));
        return res;
};
