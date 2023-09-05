canvas.addEventListener("keydown", (event)=>{
  keys.push(event.keyCode);
  keyList.push(event.keyCode);
});

canvas.addEventListener("keyup", (event)=>{
let id = 0;
var done = false;
  while(done == false){
    if(keys[id] == event.keyCode){
      keys.splice(id,1);
      done = true;
    }else{
      id++;
    }
  }
});

canvas.addEventListener("mousemove", updateCursorPos);
function updateCursorPos(event){
  cursor = getMousePos(canvas, event);
  function getMousePos(canvas, event){
    var rect = canvas.getBoundingClientRect(),
      scaleX = canvas.width / rect.width,
      scaleY = canvas.height / rect.height;
    return {
      x: (event.clientX - rect.left) * scaleX,
      y: (event.clientY - rect.top) * scaleY
    }
  }
}

document.getElementsByClassName("FSb").addEventListener("click", () => {
  canvas.requestFullscreen();
})