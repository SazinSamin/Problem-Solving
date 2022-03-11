function findElement(arr, func) {
        return arr[arr.map(ele => func(ele)).indexOf(true)];
}

findElement([1, 2, 3, 4], num => num % 2 === 0);
