// https://exercism.org/tracks/javascript/exercises/poetry-club-door-policy

export function frontDoorResponse(line) {
  return line[0];
}


export function frontDoorPassword(word) {
  const newStr = word.toLowerCase();
  return newStr[0].toUpperCase() + newStr.slice(1);
}


export function backDoorResponse(line) {
  const newLine = line.trim();
  return newLine[newLine.length  - 1];
}


export function backDoorPassword(word) {
  return frontDoorPassword(word) + ', please';
}
