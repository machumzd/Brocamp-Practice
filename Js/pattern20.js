var scanner=require("readline-sync");
var size=scanner.question("enter array size");
var i,j,x="",k=1;
for(i=1;i<=size;i++){
    x="";
    for(j=1;j<=i;j++){
        x=x+k;
        k++;
      
    } 
    console.log(x);
  
    }