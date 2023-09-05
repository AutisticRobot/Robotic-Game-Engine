//changeing momentium
import { hitbox } from "../../roboticGameEngine.js"
export function momentium(id, resist){
    if (hitbox.hasMomentium[id] != false || 0){
      let xSign = 1;
      let ySign = 1;
      if (resist === undefined || null){
        resist = 1;
      }
      // if negative, invert
      if (hitbox.xMove[id] < 0){
        var xAbs = -hitbox.xMove[id];
        xSign = -1;
      }else{
        xAbs = hitbox.xMove[id];
      }
      if (hitbox.yMove[id] < 0){
        var yAbs = -hitbox.yMove[id];
        ySign = -1;
      }else{
        yAbs = hitbox.yMove[id];
      }
      //apply air resistance
      if (xAbs >= resist){
        xAbs -= resist;
      }else{
        xAbs = 0;
      }
      //apply change
      if(xSign == -1){
        hitbox.xMove[id] = -xAbs;
      }else{
        hitbox.xMove[id] = xAbs;
      }
      //check for gravity
  
      if(hitbox.hasGravity == false || 0){
        if (yAbs >= resist){
          yAbs -= resist;
        }else{
          yAbs = 0;
        }
  
        if(ySign == -1){
          hitbox.yMove[id] = -yAbs;
        }else{
          hitbox.yMove[id] = yAbs;
        }
  
      }
    }
  }