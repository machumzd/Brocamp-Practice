const scanner=require("prompt-sync")();

let i,j;
var a=[];
var b=[];
var c=[];

function getArray(){
 var size=scanner("enter the array size");
 console.log("enter the values of first array");
 for(i=0;i<size;i++){
a[i]=[];
for(j=0;j<size;j++){
    a[i][j]=scanner();
}
 }    
 console.log("enter the values of second array");
for(i=0;i<size;i++){
    b[i]=[];
    for(j=0;j<size;j++){
        b[i][j]=scanner();
    }
}
return size;
}
function addArray(a,b,size){
    console.log("adding arrays...");
    for(i=0;i<size;i++){
        c[i]=[];
        for(j=0;j<size;j++){
            c[i][j]=(parseInt(a[i][j])+parseInt(b[i][j]));
            
        }
    }
   
}

function displayarray(c){
    console.log("display array");
    console.log(c);
        }

        
size=getArray(a,b);
addArray(a,b,size);
displayarray(c);