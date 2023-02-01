/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let buy = prices[0];
    let max_p = 0;
    let curr_p = 0;
    for(let price of prices) {
        if(price < buy) {
            buy = price;
        }
        curr_p = price - buy;
        if(curr_p > max_p) max_p = curr_p; 
    }
    return max_p;
};
