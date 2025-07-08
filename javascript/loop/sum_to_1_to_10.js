"use strict";

const ps = require("prompt-sync");
const prompt = ps();

// let val = ("enter a value:");
let sum = 0;

for (let i = 1; i <= 10; i++) {

    let val = parseInt(prompt(`enter a value:${i} -->`));
    sum = sum + val;
}

console.log("sum is 1to 10 is" + sum);