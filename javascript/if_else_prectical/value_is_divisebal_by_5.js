"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let value = parseInt(prompt("enter a value:"));

if (isNaN(value)){
    console.log("invaild input");
}
else if (value %5==0) {
    console.log("value is divad by 5")
}
else{
    console.log("value is not divid by 5")
}
