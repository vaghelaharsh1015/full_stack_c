"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let char = prompt("enter a char(a,b,h,k):");

switch (char) {
    case "a":
        console.log("you enter a");
        break;
    case "b":
        console.log("you enter b");
        break;
    case "h":
        console.log("you enter h :");
        break;
    case "k":
        console.log("you enter k");
        break;
    default:
        console.log("invaid input");
}