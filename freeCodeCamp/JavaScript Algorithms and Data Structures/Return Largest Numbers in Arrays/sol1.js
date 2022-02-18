function largestOfFour(arr) {
  let min = Number.NEGATIVE_INFINITY;
  let res = min;
  const newArr = [];
  for(let i = 0; i < arr.length; i++) {
    for(let j = 0; j < arr[i].length; j++) {
      if(arr[i][j] > res) {
        res = arr[i][j];
      }
    }
    newArr.push(res);
    res = min;
  }
  return newArr;
}

largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]]);
