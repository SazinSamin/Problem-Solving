/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
     const sLen = s.length;
    const tLen = t.length;

    const set = new Array(26).fill(0);
    for(let i = 0; i < sLen; i++) {
        set[s[i].charCodeAt() - 97]++;
    }

    for(let i = 0; i < tLen; i++) {
        set[t[i].charCodeAt() - 97]--;
    }

    for(let i = 0; i <26; i++) {
        if(set[i] != 0) return false;
    }

    return true;
};
