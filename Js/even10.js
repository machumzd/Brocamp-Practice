var a=[];
var count=0;
const scanner= require("prompt-sync")();

var size=scanner("enter the array limit");

for(let i=0;i<size;i++)
{
   a[i]=scanner("enter the array element"+(i+1)+" : ");
   if(a[i]%2==0){
    count++;
   }
}

console.log("the total even num in array : "+count);