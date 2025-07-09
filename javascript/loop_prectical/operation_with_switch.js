"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val1 = parseInt(prompt("enter a first value:"));
let val2 = parseInt(prompt("enter  second value:"));

let operation = prompt("what you want to do (+,-,*,/):");

switch (operation) {
    case "+":
        console.log(`your ans is ${val1 + val2}`);
         break;
    case "-":
        console.log(`your ans is ${val1- val2}`);
         break;
    case "*":
        console.log(`your ans is ${val1 * val2}`);
         break;
    case "/":
        console.log(`your ans is ${val1 / val2}`);
        break;
    default:

        break;
}