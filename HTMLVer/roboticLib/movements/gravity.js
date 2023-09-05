//gravity
import { hitbox } from "../../roboticGameEngine.js"
export function gravity(id, force){
    if (hitbox.hasGravity[id] != false || 0){
        if (force === undefined || null){
            force = 1;
        }
        hitbox.yMove[id] += force;
    }
}