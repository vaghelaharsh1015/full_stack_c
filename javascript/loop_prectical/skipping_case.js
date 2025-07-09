"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = prompt("enter a value (1,2,3,4,,5,6,7,8,9,10):");

switch (val) {
    case 1:
    case 2:
    case 3:
        console.log("vaue is brten 1 to 3");
    case 4:
    case 5:
    case 6:
        console.log("vaue is brten 5 to 6");
    case 7:
    case 8:
    case 9:
    case 10:
        console.log("vaue is brten 7 to 10");    
    default:
        break;
}