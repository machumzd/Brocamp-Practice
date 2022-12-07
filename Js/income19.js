const scanner=require("prompt-sync")();
var income=scanner("enter the annual income : ");
function annualIncome(income){
    var tax;
    if(income<=250000){
        console.log("No TAX");
    }else if(income>250000&&income<=500000){
        tax=(income*0.05);
        console.log("income tax amount : "+tax);
    }else if(income>500000&&income<=1000000){
        tax=(income*0.2);
        console.log("income tax amount : "+tax);
    }else if(income>1000000&&income<=5000000){
        tax=(income*0.3);
        console.log("income tax amount : "+tax);
    }else{
        console.log("please enter a valid amount ")
    }
}
annualIncome(parseFloat(income));