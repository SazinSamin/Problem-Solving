/**
 * @param {string} s
 * @return {string}
 */
var toLowerCase = function(s) {
    let newString = "";
        for(let i = 0; i < s.length; i++) {
                let curr = s[i].charCodeAt();
                if(curr >= 65 && curr <=90) {
                        newString += s[i].toLowerCase();
                } else {
                        newString += s[i];
                }
        }
        return newString;
};
