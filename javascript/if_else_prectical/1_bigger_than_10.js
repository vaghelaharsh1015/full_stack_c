"use strict";

const ps = require("prompt-sync");
const prompt = ps()

let val=prompt("enter a value:");

if (val>10)
{
    console.log("value is bigger than 10");
}
else if (val<10)
{
    console.log("valuse is under in 10");
}
else
{
    console.log("value is 10");
}