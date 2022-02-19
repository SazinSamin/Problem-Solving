function confirmEnding(str, target) {
  const regEx = new RegExp(`${target}$`);
        return regEx.test(str);
}

confirmEnding("Bastian", "n");
