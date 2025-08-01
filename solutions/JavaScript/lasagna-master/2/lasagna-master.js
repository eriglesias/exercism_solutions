/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */

export function cookingStatus(timeRemaining){
  if(timeRemaining === 0) {
    return 'Lasagna is done.';
  } if (!timeRemaining) {
    return 'You forgot to set the timer.';
  }
  return 'Not done, please wait.';
}

export function preparationTime (layers, layerTime = 2){
  return layers.length * layerTime;
}

// noodles: 100, sauce: 0.4 

export function quantities (layersArray){
  let sauceCounter = 0;
  let noodlesCounter = 0;

  for (let i=0; i<layersArray.length; i++ ) {
    if (layersArray[i] === 'noodles') {
      noodlesCounter ++
    } else if (layersArray[i] === 'sauce') {
      sauceCounter ++
    } else {
      null 
    }  
  }
  return {'noodles': (noodlesCounter * 50), 'sauce': (sauceCounter * 0.2)}
}

export function addSecretIngredient (friendsList, myList){
  let secretIngredient = friendsList[friendsList.length -1];
   myList.push(secretIngredient);
}

export function scaleRecipe (recipe, portions) {
  const scaledRecipe = {};
  for (let ingredient in recipe) {
    scaledRecipe[ingredient] = recipe[ingredient] * (portions /2);
  }
  return scaledRecipe;
}
