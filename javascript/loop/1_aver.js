"use strict";

const ps = require("prompt-sync");
const prompt = ps();

// let val = ("enter a value:");
let sum = 0, avg;
let val = 0;

for (let i = 1; i <= 10; i++) {

    val = parseInt(prompt(`Enter a value : `));
    sum = sum + val;
    avg = sum / 10;
}
console.log("Average is 1 to 10 is " + avg);