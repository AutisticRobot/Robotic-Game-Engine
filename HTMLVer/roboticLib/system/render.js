//square render
import { hitbox } from "../../roboticGameEngine.js"
export function render(id){
    switch(hitbox.color[id]){
      default:
        ctx.fillStyle = hitbox.color[id];
        break;
      case 0:
        ctx.fillStyle = "black";
        break;
      case 1:
        ctx.fillStyle = "yellow";
        break;
    }
  ctx.beginPath();
  ctx.fillRect(hitbox.x[id], hitbox.y[id], hitbox.sizeX[id], hitbox.sizeY[id]);
}