function bouncer(arr) {
        const newArr = [];
        let length = arr.length;
        let i = 0;
        while (i < length) {
                let curr = arr[i++];
                if (curr !== false && curr !== null && curr !== 0 && curr !== "" && curr !== undefined && !Number.isNaN(curr)) {
                        newArr.push(curr);
                }
        }
        return newArr;
}


bouncer([7, "ate", "", false, 9]);
console.log(bouncer([7, "ate", "", false, 9]));
