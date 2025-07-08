"use strict";

const ps=require("prompt-sync");
const prompt=ps();

let cnt=1;
for (let i=1;i<=10;i++)
{
    let val=parseInt(prompt(`enter a value ${i}:`));
    if (i==5) continue;
       
    console.log(i)
    cnt++;
}