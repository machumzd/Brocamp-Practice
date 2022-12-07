const scanner=require("prompt-sync")();

var mark1=scanner("enter your first mark :");
var mark2=scanner("enter your second mark :");
console.log("first mark : "+mark1);
console.log("second mark : "+mark2);
var sum=parseInt(mark1)+parseFloat(mark2);
console.log("and the sum is : "+sum)