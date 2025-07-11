"use strict ";

const ps=require("prompt-sync");
const prompt=ps();

let value=prompt("enter a avlue:");
let fact =1;

for(i=1;i<=value;i++)
{
    fact = fact * i;
}
console.log(fact)