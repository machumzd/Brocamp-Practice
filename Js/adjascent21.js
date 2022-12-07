const scanner=require("prompt-sync")();
var a=[];
var c=[];
var size=scanner("enter the size of the array");
console.log("enter the array elements")
for(i=0;i<size;i++){
     a[i]=scanner();
}
for(i=0;i<size-1;i++){
   c[i]=(parseInt(a[i])*parseInt(a[i+1]));
}
 console.log(c);
