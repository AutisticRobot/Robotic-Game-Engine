//despawn
import { hitbox } from "../../roboticGameEngine.js"
export function despawn(id, buffer){
    if (hitbox.despawn[id] != false || 0){
      if (buffer === undefined || null){
        buffer = 100;
      }
      hitbox.farX[id] = hitbox.x[id] + hitbox.sizeX[id]
      hitbox.farY[id] = hitbox.y[id] + hitbox.sizeY[id]
      if(hitbox.x[id] > width + buffer &&
        hitbox.y[id] > height + buffer &&
        -buffer > hitbox.farX[id] &&
        -buffer > hitbox.farY[id]){
        deleteHitbox(id);
      }
    }
  }