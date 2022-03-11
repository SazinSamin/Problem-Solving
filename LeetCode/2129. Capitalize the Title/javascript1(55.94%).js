/**
 * @param {string} title
 * @return {string}
 */
var capitalizeTitle = function(title) {
    let res = [];
     const len = title.length;
     let curr;
     for(let i  = 0, j = 0; i <= len; i++) {
        curr = title[i];
        if(i == len || curr == ' ') {
                if(i - j > 2) {
                        res[j] = res[j].toUpperCase();              
                }
                if(i != len) {
                        res[i] = curr;
                }
                j = i + 1;
        } else {
                res[i] = curr.toLowerCase();
        }
     }
     res  = res.join('');
     return res;
};
