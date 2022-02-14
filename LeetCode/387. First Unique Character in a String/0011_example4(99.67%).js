/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
        const len = s.length;
    const array = new Array(26).fill(0);
    for(let i = 0; i < len; i++) {
            array[s.charCodeAt(i) - 97] += 1;
    }   

    for(let i = 0; i < len; i++) {
            if (array[s.charCodeAt(i) - 97] == 1) {
                    return i;
            }
    }
    return -1;
};
