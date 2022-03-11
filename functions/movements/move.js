//motion update
function move(id){
    if(hitbox.intangible[id] == false){//check for tangability

        hitbox.x[id] += hitbox.xMove[id];
        for (var id2=0; id2 < hitbox.tag.length; id2++){//check if x hit
            if(hitbox.stopMove[id2] == true){
                if(hitCheck(id, id2) == true){
                    hitbox.x[id] -= hitbox.xMove[id];
                }
            }
        }

        hitbox.y[id] += hitbox.yMove[id];
        for (var id2=0; id2 < hitbox.tag.length; id2++){//check if y hit
            if(hitbox.stopMove[id2] == true){
                if(hitCheck(id, id2) == true){
                    hitbox.y[id] -= hitbox.yMove[id];
                }
            }
        }
    }else{
        hitbox.x[id] += hitbox.xMove[id];
        hitbox.y[id] += hitbox.yMove[id];
    }
}