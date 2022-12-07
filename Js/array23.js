const scanner=require("prompt-sync")();
var i,j;
var a=[];

function getArray(){
    var size=scanner("enter the size of array : ");
    console.log("enter the array elements");
    for(i=0;i<size;i++){
        a[i]=[];
        for(j=0;j<size;j++){
            a[i][j]=scanner();
        }
    }
}
function displayArray(a){
console.log(a);
}
getArray();
displayArray(a);