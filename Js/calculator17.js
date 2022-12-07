const scanner=require("prompt-sync")();
class calculator{
    constructor(num1,num2){
        this.num1=num1;
        this.num2=num2;
    }
    get numbers(){
        if(option==1){
             return this.addition();
        }else if(option==2){
            return this.substraction();
        }else if(option==3){
            return this.multiplication();
        }else if(option==4){
            return this.division();
        }else{
            return this.default();
        }
     
    }
     addition(){
        return this.num1+this.num2;
    }
    substraction(){
        return this.num1-this.num2;
    }
    multiplication(){
        return this.num1*this.num2;
    }
    division(){
        return this.num1/this.num2;
    }
    default(){
        console.log("please enter 1 to 4 digits");
    }
}
var num1=scanner("enter the first num : ");
var num2=scanner("enter the second number : ");
console.log("you can choose \n1.addition\n2.substraction\n3.multiplication\n4.division\n")
var option=scanner();

var calc=new calculator(parseInt(num1),parseInt(num2));
console.log(calc.numbers);

