"use strict";

const ps=require("prompt-sync");
const prompt=ps();

for (let i=1;i<=10;i++)
{
    let val=prompt("enter a value:");

    if (val%2!=0) {
        console.log("even is "+val);
    }
}