const scanner=require ("prompt-sync")();
var num=scanner("enter a limit");
let i,j;
x="";
for(i=1;i<=num;i++){
    for(j=1;j<=i;j++){
       x=x+j;
       
    }
  console.log(x);
    x=""
}