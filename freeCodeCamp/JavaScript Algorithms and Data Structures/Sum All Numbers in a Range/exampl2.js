// see example 2
// https://forum.freecodecamp.org/t/freecodecamp-challenge-guide-sum-all-numbers-in-a-range/16083

function sumAll(arr) {
    const nucount = Math.abs(arr[0] - arr[1]) + 1;
    return ((arr[0] + arr[1]) * nucount) / 2;
}
