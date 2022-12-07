const prompt=require("prompt-sync")();
var a=[];
let i,j;
 var size=prompt("enter the size of the array");
 console.log("enter the values of array");
 for(i=0;i<size;i++){
     a[i]=prompt();
 }
 for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(a[i]>a[j]){
            var c=a[j];
            a[j]=a[i];
            a[i]=c;
        }
    }
 }
 console.log(a);