import { hitbox } from "../../roboticGameEngine.js"
import { lineCheck } from "./lineCheck.js"
export function sideCheck(id1, id2, side){
    hitbox.farX[id1] = hitbox.x[id1] + hitbox.sizeX[id1];
    hitbox.farY[id1] = hitbox.y[id1] + hitbox.sizeY[id1];

    switch(side){
    case "up":
        var obj = {
        x:id1.x + 1,
        y:id1.y - 1,
        size:id1.sizeX - 2,
        dir:"x",
      }
      if(lineCheck(id2, obj)){
          return(true);
      }else{
          return(false);
      }
      break;
      case "down":
      var obj = {
          x:id1.x + 1,
          y:id1.farY + 1,
          size:id1.sizeX - 2,
          dir:"x",
        }
        if(lineCheck(id2, obj)){
            return(true);
        }else{
            return(false);
        }
        break;
        case "left":
      var obj = {
          x:id1.x - 1,
          y:id1.y + 1,
          size:id1.sizeY - 2,
          dir:"y",
        }
        if(lineCheck(id2, obj)){
            return(true);
        }else{
            return(false);
        }
        break;
      case "right":
      var obj = {
          x:id1.farX + 1,
          y:id1.y + 1,
          size:id1.sizeY - 2,
          dir:"y",
        }
        if(lineCheck(id2, obj)){
            return(true);
        }else{
            return(false);
        }
        break;
    }
}