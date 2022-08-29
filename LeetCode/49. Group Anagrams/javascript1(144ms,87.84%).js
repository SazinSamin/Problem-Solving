/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const group = {};
        for(let i = 0; i < strs.length; i++) {
                const temp = strs[i].split('').sort().join('');
                if (!group.hasOwnProperty(temp)) {
                        group[temp] = [];
                }
        }


        for(let i = 0; i < strs.length; i++) {
                const original = strs[i];
                const sort = strs[i].split('').sort().join('');
                const arr = group[sort];
                arr.push(original);
                group[sort] = arr;
        }

        const res = [];
        for(const [key, val] of Object.entries(group)) {
                res.push(val);
        }


        return res;
};
