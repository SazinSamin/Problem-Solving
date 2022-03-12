function destroyer(arr) {
        let idx;        
        for(let i = 1; i < arguments.length; i++) {
                for(let j = 0; j < arr.length; j++) {
                        if(arr[j] == arguments[i]) {
                                arr.splice(j, j+1);
                        }
                }
        }
        return arr;
}

destroyer([1, 2, 3, 1, 2, 3], 2, 3);
