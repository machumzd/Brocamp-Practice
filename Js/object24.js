const scanner=require("prompt-sync")();
var area;


class Area {
 circle(){
        var radius=scanner("enter your circle radius :");
        area=(3.14*parseFloat(radius)*parseFloat(radius));
        console.log("the area of circle = "+area);
    }
  square(){
        var left=scanner("enter your left side length :");
        var right=scanner("enter your right side length :");
        area=(parseFloat(left)*parseFloat(right));
        console.log("the area of square  = "+area);
    }
  rectangle(){
        var height=scanner("enter your object height :");
        var breadth=scanner("enter your object breadth :");
        area=(parseFloat(height)*parseFloat(breadth));
        console.log("the area of rectangle = "+area);
    }
   triangle(){
        var height2=scanner("enter your object height :");
        var breadth2=scanner("enter your object breadth :");
        area=((parseFloat(height2)*parseFloat(breadth2))/2);
        console.log("the area of triangle ="+area);
    }
}
class myClass extends Area{
    myFun(){
 console.log("1.circle\n2.square\n3.rectangle\n4.triangle\n ");
    var num = parseInt(scanner("choose a number to calculate area : "));
 
    switch(num){
        case 1:
            obj.circle();
            break;
        case 2:
            obj.square();
            break;
        case 3:
            obj.rectangle();
            break;
        case 4:
            obj.triangle();
            break;
        default:
            console.log("check again");
            break;
    }
}
}
var obj = new myClass();
obj.myFun();