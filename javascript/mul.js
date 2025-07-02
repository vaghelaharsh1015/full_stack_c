"use strict";

const ps =require("prompt-sync");
const prompt = ps();

let val1=prompt("enter 1st value:");
let val2=prompt("enter 2st value:");

let mul=parseInt(val1)*parseInt(val2);

console.log("multi is "+mul);