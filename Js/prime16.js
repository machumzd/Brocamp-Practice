const scanner = require('prompt-sync')();
var num=scanner("enter a number");
var flag=0;

for(i=2;i<=(num/2);i++){
    if(num%i==0){
        flag=1; 
}
}
if(flag==1||num==1){
    console.log("its not a prime number");
}
else{
    console.log("its prime number")
}
