const scanner=require("prompt-sync")();

function car(Name,mileage,max_speed){
    this.Name="toyota";
    this.mileage="24";
    this.max_speed="85km/hr";
}
const car2=new car();

console.log(car2.Name);
console.log(car2.mileage);
console.log(car2.max_speed);

