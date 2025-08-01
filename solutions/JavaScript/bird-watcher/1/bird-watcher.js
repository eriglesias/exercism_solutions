// @ts-check
//
// The line above enables type checking for this file. Various IDEs interpret
// the @ts-check directive. It will give you helpful autocompletion when
// implementing this exercise.

/**
 * Calculates the total bird count.
 *
 * @param {number[]} birdsPerDay
 * @returns {number} total bird count
 */
export function totalBirdCount(birdsPerDay) {
  let counted_birds =0;
  for (let i =0; i< birdsPerDay.length; i++){
    counted_birds += birdsPerDay[i];
  }
  return counted_birds;
}

/**
 * Calculates the total number of birds seen in a specific week.
 *
 * @param {number[]} birdsPerDay
 * @param {number} week
 * @returns {number} birds counted in the given week
 */
export function birdsInWeek(birdsPerDay, week) {
  const daysInWeek = 7;
  const startOfDay = week * daysInWeek;
  let counted_birds = 0;

  for (let i = startOfDay; i < startOfDay + daysInWeek +1 ; i++) {
    counted_birds += birdsPerDay[i];
  }

  return counted_birds;
}

/**
 * Fixes the counting mistake by increasing the bird count
 * by one for every second day.
 *
 * @param {number[]} birdsPerDay
 * @returns {number[]} corrected bird count data
 */
export function fixBirdCountLog(birdsPerDay) {
  throw new Error('Please implement the fixBirdCountLog function');
}
