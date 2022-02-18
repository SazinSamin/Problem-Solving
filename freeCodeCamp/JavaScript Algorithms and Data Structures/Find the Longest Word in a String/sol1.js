function findLongestWordLength(str) {
        let longest = 0;
        let res = 0;
        for (let i = 0; i < str.length; i++) {
                let x= str[i];
                if(str[i] != ' ') {
                        longest += 1;
                } else {
                        if(longest > res) {
                                res = longest;
                        }
                        longest = 0;
                }
        }
                longest > res ? res = longest : res;

        return res;
}

findLongestWordLength("The quick brown fox jumped over the lazy dog");
