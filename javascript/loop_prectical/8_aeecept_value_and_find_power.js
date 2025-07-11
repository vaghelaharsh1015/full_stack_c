"use strict";

const ps=require("prompt-sync");
const  prompt=ps();

let base=prompt("enter a value:");
let exponent=prompt("enter exponent:");

let result = 1;

for (let i=1;i<=exponent;i++) 
{
    result*=base;
}

console.log(result);