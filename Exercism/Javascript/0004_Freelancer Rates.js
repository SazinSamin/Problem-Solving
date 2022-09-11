export function dayRate(ratePerHour) {
  return ratePerHour * 8;
}


export function daysInBudget(budget, ratePerHour) {
  return Math.floor(budget / (dayRate(ratePerHour)));
}


export function priceWithMonthlyDiscount(ratePerHour, numDays, discount) {
  
        const fullMonth = Math.floor(numDays / 22);
        const remainDays = numDays % 22;
        const fulleMonthPay = 22 * dayRate(ratePerHour);
        const discountOnMonth = fulleMonthPay * discount;
        const afterDiscount = fulleMonthPay - discountOnMonth;
        const wholeMonth = afterDiscount * fullMonth;
        const remainDaysPay = remainDays * dayRate(ratePerHour);
  
        return Math.ceil(wholeMonth + remainDaysPay);
}
