"use strict";

const ps = require("prompt-sync");
const prompt=ps();

let value=parseFloat(prompt("enter a value:"));

if (value > 0)
{
    console.log("value is positive");
} 
else if (value < 0) 
{
    console.log("value is negative");
}
else if (value === 0)
{
    console.log("value is zero");
}
else
{
    console.log("invild value");
}