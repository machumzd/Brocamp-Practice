const scanner=require("readline-sync");
var myString=scanner.question("enter the value : ");

function reverseString(myString) {
  var splitString=myString.split("");
  try{
    if((isNaN(myString))){
        console.log("type of : "+(typeof myString));
       throw new Error('the number check')
       
    }else{
 var reverseArray=splitString.reverse();
  var joinArray=reverseArray.join("");
  console.log("reverse is :"+joinArray)
  myString=parseInt(myString);
  console.log("typeof : "+(typeof myString));
    }
  }
  catch(error){
    console.log("msg "+error)
  }

}
reverseString(myString);




