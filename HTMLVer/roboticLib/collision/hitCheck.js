//Hitbox Collision Check
import { hitbox } from "../../roboticGameEngine.js"
export function hitCheck(hitID1, hitID2){
    hitbox.farX[hitID1] = hitbox.x[hitID1] + hitbox.sizeX[hitID1]
    hitbox.farY[hitID1] = hitbox.y[hitID1] + hitbox.sizeY[hitID1]
    hitbox.farX[hitID2] = hitbox.x[hitID2] + hitbox.sizeX[hitID2]
    hitbox.farY[hitID2] = hitbox.y[hitID2] + hitbox.sizeY[hitID2]
    if(hitbox.x[hitID1] < hitbox.farX[hitID2] &&
       hitbox.y[hitID1] < hitbox.farY[hitID2] &&
       hitbox.x[hitID2] > hitbox.farX[hitID1] &&
       hitbox.y[hitID2] > hitbox.farY[hitID1]){
      return "false";
    }else{
      return "true";
  }
}