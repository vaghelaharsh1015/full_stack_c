"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let operation = parseInt(prompt("value use for addition:"));

switch (operation) {
    case 2:
        let val1 = parseInt(prompt("enter a first value:"));
        let val2 = parseInt(prompt("enter a second value:"));

        console.log(`sum is ${val1 + val2}`);
        break;
    case 3:
        let val3 = parseInt(prompt("enter 1st value:"));
        let val4 = parseInt(prompt("enter 2st value:"));
        let val5 = parseInt(prompt("enter 3st value:"));

        console.log(`sum is ${val3+val4+val5}`);
    default:
        console.log("invaid input");
        break;
}