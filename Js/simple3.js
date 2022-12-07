const scanner=require ("prompt-sync")();
var amount=scanner("enter your principle amount :");
var rate=scanner("enter your intrest rate :");
var year=scanner("enter your number of years :");

console.log("principle amount : "+amount+"\nintrest rate : "+rate+"\nnumber of years : "+year);
var intrest=((parseInt(amount)*parseFloat(rate)*parseFloat(year))/100);
console.log("simple intrest is: "+intrest);