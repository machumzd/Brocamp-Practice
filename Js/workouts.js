const scanner=require("readline-sync");
var name=scanner.question("hello whats your name : ");
console.log("Hello "+name);
var pass=scanner.question("ok now tell me whats ur password : ",{
hideEchoBack:true
});
console.log("heiii "+name+" your password is :"+pass+" am i right");

