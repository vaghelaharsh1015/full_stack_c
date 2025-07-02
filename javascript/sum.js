"use strict";

const ps = require("prompt-sync");
const promat = ps();

let val1=promat("enter 1s value :");
let val2=promat("enter 2nd value:");

let sum =parseInt(val1)+parseInt(val2);

console.log("addition is "+sum);