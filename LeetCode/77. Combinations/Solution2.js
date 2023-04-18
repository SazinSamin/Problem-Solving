var combine = function(n, k) {
    let res = [];
    function dfs(index, current) {
        if(current.length === k) {
                res.push([...current]);
                return;
        }
        for(let i = index; i <= n; i++) {
                current.push(i);
                dfs(i+1, current);
                current.pop();
        }
    }
    dfs(1, []);
    return res;
};



console.log(combine(4, 2));
