const scanner=require ("prompt-sync")();
var a=[];
var b=[];
var c=[];
let i,j;
var size=scanner("enter the size of array");
console.log("enter the first array");
for(i=0;i<size;i++){
    a[i]=[];
    for(j=0;j<size;j++){
    a[i][j]=scanner();
    }
}
console.log("enter the second array");
for(i=0;i<size;i++){
    b[i]=[];
    for(j=0;j<size;j++){
    b[i][j]=scanner();
    }
}

console.log("the output array is");

for(i=0;i<size;i++)
{
    c[i]=[]
    for(j=0;j<size;j++){
    c[i][j]=parseInt(a[i][j])+parseInt(b[i][j]);
    console.log(c[i][j]);
}

}


