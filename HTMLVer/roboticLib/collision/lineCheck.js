import { hitbox } from "../../roboticGameEngine.js"
export function lineCheck(id, obj){
  /*
  var obj = {
    x:0,
    y:0,
    size:0,
    dir:"x", //x or y
  }
  */
  var farx = obj.x;
  var fary = obj.y;
  if(obj.dir == x){
    farx += obj.size;
  }else{
    fary += obj.size;
  }
  hitbox.farX[id] = hitbox.x[id] + hitbox.sizeX[id]
  hitbox.farY[id] = hitbox.y[id] + hitbox.sizeY[id]


  if(hitbox.x[id] < farx &&
     hitbox.y[id] < fary &&
     obj.x > hitbox.farX[id] &&
     obj.y > hitbox.farY[id]){
    return "false";
  }else{
    return "true";
  }
}