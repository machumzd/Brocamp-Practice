var a=[];
var b=[];
var c=[];
const scanner=require("prompt-sync")();
var size=5;
for(let i=0;i<size;i++){
    a[i]=scanner("enter the first array "+(i+1)+" :");
}
for(let i=0;i<size;i++){
    b[i]=scanner ("enter the second array "+(i+1)+" :");
}
for(let i=0;i<size;i++){
    c[i]=b[i];
    b[i]=a[i];
    a[i]=c[i];
}
console.log("first array :"+a);
console.log("second array:"+b);