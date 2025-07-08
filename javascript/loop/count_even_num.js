"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let cnt = 0;

for (let i = 1; i <= 5; i++) {
    let val = parseInt(prompt(`enter a num ${i}:`));
    if (val % 2 == 0) cnt++;
    // cnt++;
}

console.log(`total of num even num ${cnt}`);