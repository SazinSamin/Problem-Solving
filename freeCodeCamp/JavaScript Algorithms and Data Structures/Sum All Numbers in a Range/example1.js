function sumAll(arr) {
  
  let x = arr[0];
    let y = arr[1];
    let sum = 0;

    if (x < y) {
        while (x <= y) {
            sum += x++;
        }
    } else {
        while (y <= x) {
            sum += y++;
        }
    }
    return sum;
}

sumAll([1, 4]);
