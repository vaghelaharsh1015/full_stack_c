"use strict";

const ps =require("prompt-sync");
const prompt = ps();

let ival=prompt("enter a value:");
let sld=0;

ival = parseInt(ival / 10);
sld = ival % 10;

console.log("your value's last dijit:"+ sld);