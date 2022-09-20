export function timeToMixJuice(name) {
  switch(name) {
                case "Pure Strawberry Joy":
                        return 0.5;
                case "Energizer":
                        return 1.5;
                case "Green Garden":
                        return 1.5;
                case "Tropical Island":
                        return 3;
                case "All or Nothing":
                        return 5;
                default:
                        return 2.5;
        };
}


export function limesToCut(wedgesNeeded, limes) {
  const map = {
                "small" : 6,
                "medium": 8,
                "large": 10,
        };

        let i = 0, sum  = 0, count = 0;
        while(sum < wedgesNeeded) {
                sum += map[limes[i++]];
                count++;
        }
        return (limes.length + 1) == count ? count - 1: count;
;
}


export function remainingOrders(timeLeft, orders) {
         const map = {
                "Pure Strawberry Joy": 0.5,
                "Energizer": 1.5,
                "Green Garden": 1.5,
                "large": 10,
                'Tropical Island': 3,
                "All or Nothing": 5,
        }

        let start = 0;
        while (timeLeft > 0) {
                const idx = map[orders[start++]];
                timeLeft = timeLeft - (idx  === undefined ? 2.5 : idx);
        }      
        const arr = orders.slice(start);
        const newArr = [];
        arr.forEach(element => {
                newArr.push(element);
        });
        return newArr;
}
