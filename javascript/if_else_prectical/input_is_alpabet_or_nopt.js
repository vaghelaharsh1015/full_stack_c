"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let char = prompt("enter a char:");

if (
    char.length === 1 &&
    (
        (char >= 'a' && char <= 'z') ||
        (char >= 'A' && char <= 'Z')
    )
) {
    console.log("char is alphabet");
} else {
    console.log("char is not alphabet");
}