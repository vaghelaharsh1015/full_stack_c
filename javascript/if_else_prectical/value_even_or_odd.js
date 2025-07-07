"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let value = parseInt(prompt("enter a value:"));

if (isNaN(value)) {
    console.log("invaild input");
}
else if (value % 2 == 0) {
    console.log("value is even")
}
else if (value % 2 != 0) {
    console.log("value is odd")
}