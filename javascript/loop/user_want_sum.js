"use strict";

const ps=require("prompt-sync");
const prompt=ps();

let sum=0;
let ans=0;

for(let i=1;i<=10;i++)
{
    let val=parseInt(prompt(`enter a value${i}:`));
     sum=sum+val;

    let ans=prompt("do you want to add more?(y/n):");
    if (ans=='n') break;

}
console.log("sum is "+sum);