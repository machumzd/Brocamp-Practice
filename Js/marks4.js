const scanner=require("prompt-sync")();
var mark=scanner("enter your marks");
if(mark>50){
    console.log("student is passed");
}else if(mark<50){
    console.log("sorry student is failed");
}else{
    console.log("please check the marks again");
}
