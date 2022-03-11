function repeatStringNumTimes(str, num) {
        return num > 0 ? str + repeatStringNumTimes(str, num - 1) : "";
}


repeatStringNumTimes("abc", 3);
