const scanner=require("prompt-sync")();
var userHeight=scanner("enter a number");

try{
    if((isNaN(userHeight))){
        throw new Error('notANumberError');
    }else if(userHeight>200){
        throw new Error('hugeHeightError');
    }else if(userHeight<40){
        throw new Error('tinyHeightError')
    }else{
        console.log("valid");
    }

}
catch(error){
    console.log("error message :"+error);
}