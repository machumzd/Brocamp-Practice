const scanner=require("prompt-sync")();
let i;
var size;
var a=[];

function array(){
 
    size=scanner("enter the array size");
    console.log("enter the arrays")
    for(i=0;i<size;i++){
        a[i]=scanner();
    }
}
function displayarray(a){
    console.log(a);
}
 size=array();
displayarray(a);


