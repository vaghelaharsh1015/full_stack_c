"use strict";

const ps =require("prompt-sync");
const prompt = ps();

let val=prompt("enter a value:");

let last=val%10;

console.log("your value's last dijit:"+ last);