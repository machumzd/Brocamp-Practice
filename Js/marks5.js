const scanner=require("prompt-sync")();
var mark=scanner("enter your marks");
console.log("your grade is : ")
if(mark>=90){
    console.log("A");
}
else if(mark>=80&&mark<=89){
    console.log("B");
}
else if(mark>=70&&mark<=79){
    console.log("c");
}
else if(mark>=60&&mark<=69){
    console.log("D");
}
else if(mark>=50&&mark<=59){
    console.log("E");
}
else if(mark<50){ 
    console.log("Failed");
}
else{
    console.log("check your number");
}
