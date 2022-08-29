/**
 * @param {string[]} words
 * @return {string[]}
 */
var removeAnagrams = function(words) {
    const str = words;
        const _final = [];
        for(let i = 0; i < words.length; i++) {
                let first = words[i];
                first = first.split('').sort().join('');
                if(_final.length < 1) {
                        _final.push(words[i]);
                } else {
                        if(first != (_final[_final.length - 1]).split('').sort().join('')) {
                                _final.push(words[i]);
                        }
                }
        }
        return _final;
};
