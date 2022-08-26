/**
 * @param {string} s
 * @return {string}
 */
var replaceDigits = function(s) {
    let resStr = '';
        for(let i = 0; i < s.length; i++) {
                let char1 = s[i].charCodeAt();
                if(char1 >= 48 && char1 <= 57) {
                        let char2 = s[i - 1].charCodeAt();
                        let c = parseInt(s[i]) + parseInt(char2);
                        resStr += String.fromCharCode(c);
                } else {
                        resStr += s[i];
                }
       }
    return resStr;
};
