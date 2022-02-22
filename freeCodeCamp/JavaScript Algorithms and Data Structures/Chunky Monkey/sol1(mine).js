function chunkArrayInGroups(arr, size) {
        let res = [];
        let curr = [];
        let j;
        const len = arr.length;
        let dec = size;
        for(let i = 0; i < len; i++) {
                while(dec && i < len) {
                        curr.push(arr[i]);
                        dec--; i++;
                }
                res.push(curr);
                curr = [];
                dec = size;
                i--; 
        }

        return res;
}

chunkArrayInGroups(["a", "b", "c", "d"], 2);
