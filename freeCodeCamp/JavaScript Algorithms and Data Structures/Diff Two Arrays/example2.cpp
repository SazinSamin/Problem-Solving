function diffArray(arr1, arr2) {
    const newArr = [];
    const res1 = arr1.filter(ele => arr2.indexOf(ele) == - 1);
    const res2 = arr2.filter(ele => arr1.indexOf(ele) == -1);
    newArr.push(...res1, ...res2);
    return newArr;
}


diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]);
