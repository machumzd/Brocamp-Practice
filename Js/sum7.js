const prompt=require("prompt-sync")();
var num=prompt("enter a number");
let sum=0;
for(let i=1;i<=num;i++){
    if(i%2==1){
       sum=sum+i;       
    }  
}
console.log("the sum of odd numbers: "+sum);