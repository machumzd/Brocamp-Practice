const scanner=require ("prompt-sync")();
var sGrade;
var test=scanner("enter written test marks : ");
var exam=scanner("enter your Lab exam marks : ");
var ass=scanner("enter your assignment marks : ");
console.log("Written Test :"+test);
console.log("Lab Exam : "+exam);
console.log("Assignments : "+ass);
function grade(test,exam,ass){
   sGrade=(((test*70)/100)+((exam*20)/100)+((ass*10)/100));
   return sGrade;
}
sGrade=grade(test,exam,ass);
console.log("overall grade is : "+sGrade);