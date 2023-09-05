//RTA: Rotation To Axis

export function rta(type, rotate_or_x, speed_or_y){
    switch(type){
        default:
            return "0:Degrees to Axis, 1:Axis to Degrees";
        break;
        case 0:
            var r = rotate_or_x;
            var s = speed_or_y;
            //angle to axis
            var output = {
                xMove: 0,
                yMove: 0,
            }
            r = r * Math.PI / 180;
            output.xMove = s * Math.cos(r);
            output.yMove = s * Math.sin(r);
            output.yMove = -output.yMove;

            return(output);
        break;
        case 1:
            var x = rotate_or_x;
            var y = -speed_or_y;
            //axis to angle
            var output = {
                angle: 0,
                speed: 0,
            }
            output.angle = Math.atan(y/x);
            output.angle = output.angle * 180 / Math.PI;
            x = x * x
            y = y * y
            output.speed = Math.sqrt(x+y);
            return(output);
        break;
    }
}