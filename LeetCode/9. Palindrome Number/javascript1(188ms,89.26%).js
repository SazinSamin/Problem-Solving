/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
        if(x < 0 || ((x % 10 == 0) && x != 0)) return false;
        let reverse = 0;
        while(reverse < x) {
                reverse = reverse * 10 + x % 10;
                x = parseInt(x / 10);
        }
        return x == reverse || x == parseInt(reverse / 10);

};
