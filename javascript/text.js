"use strict";

const ps =require("prompt-sync");
const prompt = ps();

let ch1 = prompt("Enter the 1st character:"); 
let ch2 = prompt("Enter the 2nd character:"); 
let ch3 = prompt("Enter the 3rd character:"); 

console.log(ch3 + " " + ch2 + " " + ch1); 