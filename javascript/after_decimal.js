"use strict";

const ps = require("prompt-sync");
const prompt = ps(); 


let fval = prompt("Enter a value:"); 
let temp = 0;
let ans = 0;

temp = parseInt(fval);
ans = fval-temp ;


console.log("Value is " + ans.toFixed(2));