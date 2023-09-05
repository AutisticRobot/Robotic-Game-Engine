export const canvas = document.getElementById("id")
export const ctx = canvas.getContext("2d");
canvas.focus();
export const width = 1920;
export const height = 1080;

//setting the window size of the canvas
canvas.width = width;
canvas.height = height;

export var keys = [];
export var keyList = [];
export var hitbox = {
  test:true,
};
export var base = {//hitbox vars & their defaults
  x:50,
  y:50,
  xMove:0,
  yMove:0,
  sizeX:50,
  sizeY:50,
  property:-1,
  tag:1,
  layer:0,
  color:0,
  hasMomentium:false,
  hasGravity:false,
  canDespawn:false,
  stopMove:false,
  intangible:false,
}
for (const prop in base){
  hitbox[prop] = [];
}

export var cursor = {
  x: 0,
  y: 0,
}


export * as func from "./roboticLib/roboticLib.js";//import function
//rename imported functions
