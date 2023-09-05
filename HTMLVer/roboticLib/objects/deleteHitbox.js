//delete Hitbox
import { hitbox } from "../../roboticGameEngine.js"
import { base } from "../../roboticGameEngine.js"
export function deleteHitbox(id){
  for (const prop in base){
    hitbox[prop].splice(id,1);
  }
}