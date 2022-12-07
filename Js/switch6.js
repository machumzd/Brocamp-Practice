const scanner=require("prompt-sync")();

var num=scanner("enter a number to display week");
switch(parseInt(num)){
case 1:
    console.log("sunday");
    break;
    case 2:
        console.log("monday");
        break;
    case 3:
    console.log("tueday");
    break;
    case 4 :
    console.log("wednesday");
    break;
    case 5:
    console.log("thursday");
    break;
    case 6:
    console.log("friday");
    break;
    case 7:
    console.log("saturday");
    break;
    default:
        console.log("check again your num");
        break;
}
