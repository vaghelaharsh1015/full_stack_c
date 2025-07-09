
let oddsum=0;
let evensum=0;

for(let i=1;i<=10;i++)
{
    if (i % 2 == 0) 
    {
        oddsum=oddsum+i;
    }
    else  
    {
        evensum=evensum+i;
    }
}

console.log("odd value "+oddsum);
console.log("even value "+evensum);