"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val1 = parseInt(prompt("enter a 1st value:"));
let val2 = parseInt(prompt("enter a 2st value:"));
let val3 = parseInt(prompt("enter a 3st value:"));

if (val1 > val2) 
{
    if (val1 > val3)
     {
        console.log("1st value is biggest "+val1);
    }
}
else if (val2 > val1 )
{
    if (val2>val3) 
    {
            console.log("2nd value is  biggest "+val2);
    }
}
else if (val3 > val1)
{
    if (val3>val1) 
    {
         console.log("3rd value is biggest ");
    }
}   
else
    console.log("value is equal")