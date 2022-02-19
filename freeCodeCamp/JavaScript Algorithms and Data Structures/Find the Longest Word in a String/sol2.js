function findLongestWordLength(str) {
        return str.split(' ').reduce((prev, curr) => {
                return (prev > curr.length) ? prev : curr.length;
        }, 0)
}


findLongestWordLength("The quick brown fox jumped over the lazy dog");
