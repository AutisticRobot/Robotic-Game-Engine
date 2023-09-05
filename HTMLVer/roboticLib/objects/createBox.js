//Create hitbox
import { hitbox } from "../../roboticGameEngine.js"
import { boxObj } from "../../roboticGameEngine.js"
import { base } from "../../roboticGameEngine.js"
export function createBox(boxObj){
  if(boxObj == undefined){
    boxObj = base;
  }
  for (const prop in base){
    if(boxObj[prop] == undefined){
      boxObj[prop] = base[prop];
    }
    hitbox[prop].push(boxObj[prop]);
  }
}