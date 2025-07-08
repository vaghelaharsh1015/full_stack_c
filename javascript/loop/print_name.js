"use strict";

const ps=require("prompt-sync");
const prompt=ps();

let name=prompt("enter your name:");

for (let i=1;i<=10;i++)
{
    console.log(name);
}