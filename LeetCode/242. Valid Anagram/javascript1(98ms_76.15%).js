/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
       const sLen = s.length;
    const tLen = t.length;

    if(sLen != tLen) return false;

    const arr = [];
    let size = 26;
    while(size--) {
        arr[size] = 0;
    }

    for(let i = 0; i < sLen; i++) {
        arr[s[i].charCodeAt() - 97]++;
    }


    let var2;
    for(let i = 0; i < tLen; i++) {
        var2 = t[i].charCodeAt() - 97;
        if(arr[var2] == 0) {
            return false;
        } else {
            arr[var2]--;
        }
    }

    for(let i = 0; i < 26; i++) {
        if(arr[i] > 0) {
            return false;
        }
    }

    return true;
};
