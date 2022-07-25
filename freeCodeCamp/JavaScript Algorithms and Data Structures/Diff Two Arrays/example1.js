function diffArray(arr1, arr2) {
    const newArr = [];
    const len1 = arr1.length;
    const len2 = arr2.length;

    for(let i = 0; i < len1; i++) {
        if(!arr2.includes(arr1[i])) {
            newArr.push(arr1[i]);
        }
    }

   for(let i = 0; i < len2; i++) {
       if(!arr1.includes(arr2[i])) {
           newArr.push(arr2[i]);
       }
   }

    return newArr;
}
diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]);
