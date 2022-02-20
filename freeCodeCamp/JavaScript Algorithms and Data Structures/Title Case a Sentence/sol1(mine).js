function titleCase(str) {

        const res = [];
        res.push(str[0].toUpperCase());
        for(let i = 1; i < str.length; i++) {
                if(str[i] == ' ') {
                        res.push(str[i].toLowerCase());
                        res.push(str[++i].toUpperCase());
                } else {
                        res.push(str[i].toLowerCase());
                }
        }
        const newRes = res.join("");
        return newRes;
}

titleCase("I'm a little tea pot");
