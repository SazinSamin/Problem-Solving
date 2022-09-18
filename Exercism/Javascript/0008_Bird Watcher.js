// https://exercism.org/tracks/javascript/exercises/bird-watcher

export function totalBirdCount(birdsPerDay) {
  return birdsPerDay.reduce((prev, curr) => {
                return prev + curr;
        });
}

export function birdsInWeek(birdsPerDay, week) {
  // here we found the week start and end using multiply weekcount with week in a day
  return totalBirdCount(birdsPerDay.slice((week - 1) * 7, ((week - 1) * 7) + 7));
}

export function fixBirdCountLog(birdsPerDay) {
  for(let i = 0; i < birdsPerDay.length; i+=2) {
    birdsPerDay[i]++;
  }
  return birdsPerDay;
}
