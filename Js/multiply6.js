const scanner=require("prompt-sync")();
var num=scanner("enter a number to multiply");
for(let i=1;i<=10;i++){
    var mul=(i*parseInt(num));
  console.log(i+"x"+num+"="+mul);
}