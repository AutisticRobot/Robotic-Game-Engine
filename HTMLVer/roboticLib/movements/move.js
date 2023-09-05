//motion update
import { hitbox } from "../../roboticGameEngine.js"
import { hitCheck } from "../collision/hitCheck.js"
export function move(id){
    if(hitbox.intangible[id] == false){//check for tangability


        hitbox.x[id] += hitbox.xMove[id];
        for (var id2=0; id2 < hitbox.tag.length; id2++){//check if x hit
            if(hitbox.stopMove[id2]){
                if(hitCheck(id, id2)){
                    //hitbox.x[id] -= hitbox.xMove[id];//undo move
                    switch(Math.sign(hitbox.xMove[id]) == 1){
                        case -1:
                            var dis = hitbox.farX[id2] - hitbox.x[id] + 1;
                            hitbox.x[id] += dis;
                            break;
                        case 0:
                            break;
                        case 1:
                            var dis = hitbox.x[id2] - hitbox.farX[id] - 1;
                            hitbox.x[id] -= dis;
                            break;
                    }
                    hitbox.xMove[id] = 0;
                }
            }
        }

        hitbox.y[id] += hitbox.yMove[id];
        for (var id2=0; id2 < hitbox.tag.length; id2++){//check if y hit
            if(hitbox.stopMove[id2]){
                if(hitCheck(id, id2)){
                    //hitbox.y[id] -= hitbox.yMove[id];//undo move
                    switch(Math.sign(hitbox.yMove[id]) == 1){
                        case -1:
                            var dis = hitbox.farY[id2] - hitbox.y[id] + 1;
                            hitbox.y[id] += dis;
                            break;
                        case 0:
                            break;
                        case 1:
                            var dis = hitbox.y[id2] - hitbox.farY[id] - 1;
                            hitbox.y[id] -= dis;
                            break;
                    }
                    hitbox.yMove[id] = 0;
                }
            }
        }
    }else{
        hitbox.x[id] += hitbox.xMove[id];
        hitbox.y[id] += hitbox.yMove[id];
    }
}