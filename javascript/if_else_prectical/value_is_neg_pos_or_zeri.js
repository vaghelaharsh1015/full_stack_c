"use strict";

const ps = require("prompt-sync");
const prompt=ps();

let value=promat("enter a valiue:");

if (value > 0)
{
    console.log("value is positive");
} 
else if (value < 0) 
{
    console.log("value is negative");
}
else
{
    console.log("valueis zero");
}