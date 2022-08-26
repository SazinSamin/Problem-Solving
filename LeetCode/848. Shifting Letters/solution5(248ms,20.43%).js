/**
 * @param {string} s
 * @param {number[]} shifts
 * @return {string}
 */
var shiftingLetters = function(s, shifts) {
  let newS = [];
  let shiftAmount = 0;
  for(let i = shifts.length - 1; i >=0; i--) {
    shiftAmount += shifts[i];
    newS[i] = String.fromCharCode((((s.charCodeAt(i) - 97) + shiftAmount) % 26) + 97);
  }
  return newS.join('');
};
