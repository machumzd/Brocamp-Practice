const scanner=require("prompt-sync")();
console.log("enter the array elements upto 5")
let i;
var sum=0;
var myArray=[];
var bool;
for(i=0;i<5;i++){
myArray[i]=scanner();
}
function callback(myArray){
    for(i=0;i<5;i++){
    sum=sum+parseInt(myArray[i]);
   
    }
 console.log("the sum is :"+sum)
    if(sum%2==0){
        bool==true;
    }else{
        bool==false;
        
    }
    return bool;
}
callback(myArray);