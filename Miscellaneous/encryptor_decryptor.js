// this program under development

var shiftingLetters = function (s, shifts) {
        let newS = '';
        let shiftAmount = 0;
        for (let i = shifts.length - 1; i >= 0; i--) {
                shiftAmount += shifts[i];
                // console.log(`${s[i]} charCodeAt: ${s.charCodeAt(i)}`);
                let minus = s.charCodeAt(i) - 97;
                // console.log(`minus: ${minus}`);
                newS = String.fromCharCode(((minus + shiftAmount) % 26) + 97) + newS;
        }
        return newS
};

var unshiftingLetters = function (s, shifts) {
        let newS = '';
        let shiftAmount = 0;
        for (let i = shifts.length - 1; i >= 0; i--) {
                shiftAmount += shifts[i];
                let charCode = s.charCodeAt(i);
                console.log(`charCode: ${charCode}`);
                let minus = charCode - 97;
                console.log(`minus: ${minus}`);
                let shiftMinus = minus - shiftAmount;
                console.log(`sminus: ${shiftMinus}`);
                let module = shiftMinus % 26;
                console.log(`module: ${module}`);
                let back = Math.abs(module)+ 97;
                console.log(`back: ${back}`);
                newS += String.fromCharCode(back);
        }
        return newS
};

const s = "sazin";
const length = s.length;
const initKey = 10;
const shift  = [];

var keyGenerate = (initKey, length) => {
        let incrementKey = initKey;
        for(let i = 0; i < length; i++) {
                incrementKey += 3;
                shift.push(incrementKey);
        }
        return shift;
};


const display = (str) => {
        console.log(str);
        const res = [];
        for(let i = 0; i < str.length; i++) {
                res.push(str.charCodeAt(i));
        }
        console.log(res);
}

console.log(keyGenerate(initKey, length));
// display(s);
const encryto = shiftingLetters(s, shift);
console.log(`crypto: ${encryto}`);
// display(encryto);
const decryto = unshiftingLetters(encryto, shift);
console.log(`decrypto: ${decryto}`);
// display(decryto);
